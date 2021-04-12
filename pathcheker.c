#include "shell.h"
/**
 * alloc_error2 -  Allocation error
 * storing the address of the buffer containing the text into *b.
 *
 * @buffer: buffer to check
 * Return: -1 on eror.
 */

int alloc_error2(char *buffer)
{
	if (!buffer)
	{
		perror("hsh: allocation error\n");
		return (-1);
	}
	else
		return (0);
}

/**
 * alloc_error1 -  Allocation error
 * storing the address of the buffer containing the text into *b.
 * @dest_path: dest path
 * @buffer: buffer to check
 * Return: -1 on eror.
 */
int alloc_error1(char *buffer, char *dest_path)
{
	if (!buffer)
	{
		free(dest_path);
		perror("hsh: allocation error\n");
		return (-1);
	}
		return (0);
}

/**
  * _check_path - Split the line wrote in the console.
  * @args: Line wrote in console.
  * @flag: flag
  * Return: String with the file path.
  */
char **_check_path(char **args, int *flag)
{
	char *path, **tokens_path, *dest_path, *copy_line;
	int j, k;

	for (k = 0; *(args[0] + k) != '\0'; k++) /* Check for '/' in the first arg */
	{
		if (*(args[0] + k) == '/')
			return (args); /* printf("%s\n", argv[1]);*/
	}
	dest_path = malloc(sizeof(char) * 1024); /*Memory alloc for the comp path */
	if (alloc_error2(dest_path) == -1)
		return (NULL);
	path = _getenv("PATH"); /*  Gets the path from the envi with the diff paths */
	copy_line = malloc((_strlen(path) + 1) * sizeof(char *));
	if (alloc_error1(copy_line, dest_path) == -1)
		return (NULL);
	tokens_path = _split_path(path, copy_line); /* Get array of ptr to pos paths*/
	if (tokens_path == NULL)
	{ free(copy_line);
		return (NULL);
	} /* File path (dest_path) add the '/' and the comm */
	for (j = 0; *(tokens_path + j) != NULL; j++)
	{ _strcpy(dest_path, *(tokens_path + j));
		if (*dest_path != '\0')
			_strcat(dest_path, "/");
		else
			_strcat(dest_path, "./");
			_strcat(dest_path, args[0]);
		if (access(dest_path, X_OK) != -1) /* Check acces rights */
		{ args[0] = dest_path;
			*flag = 1;
			free(copy_line);
			free(tokens_path);
			return (args);
		}
	}
	free(dest_path);
	free(tokens_path);
	free(copy_line);
	perror("hsh");
	return (NULL);
}
