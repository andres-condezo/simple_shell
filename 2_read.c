#include "shell.h"

/**
 * _read_line -  Read command prompt.
 * Return: returns a pointer to the readed line
 */

char *_read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	ssize_t res;


	/* have _getline allocate the buffer. */
	res = _getline(&line, &bufsize, STDIN_FILENO);
	if (res == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
