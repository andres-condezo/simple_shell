#include "shell.h"
/**
  * _launch - Launch the process to be excetute.
  * @args: List of arguments passed from parsing.
  * Return: Always 1..
  */
int _launch(char **args)
{
    int status, pid;
    int flag = 0;
    args = _check_path(args, &flag);
    if (args == NULL)
        return (1);
    pid = fork();
    if (pid == 0)
    {
        if (execve(args[0], args, environ) == -1)
        {
            perror("hsh");
        }
        if (flag == 1)
            free(args[0]);
        return (-1);
    }
    else if (pid < 0)
    {
        perror("hsh");
        if (flag == 1)
            free(args[0]);
        return (-1);
    }
    else
    {
        do {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    if (flag == 1)
        free(args[0]);
    return (1);
}
