#include "shell.h"
/**
  * builtin_func - Redirect to builtin functions.
  * @builtin_func: Redirect to builtin functions.
  * Return: 1 if _help works, 0 if exit works.
  */
int (*builtin_func[])(char **args, char *input) = {
    &_cd,
    &_help,
    &hsh_exit,
    &_env,
};

