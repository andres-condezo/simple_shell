#include "shell.h"

/**
 * _getline -  Reads an entire line from stream,
 * storing the address of the buffer containing the text into *b.
 *
 * @line: pointer to buffer containing the readed tex
 * @n: size of buffer
 * @stream: File to read from.
 * Return: Return the number of characters read,
 * including the delimiter character.
 */
ssize_t _getline(char **line, size_t *n, __attribute__((unused))FILE * stream)
{
	size_t bufsize = 1024, index = 0;
	int c, f = 0;
	char *buffer;

	if (*n == 0)
		bufsize = 1024;
	buffer = malloc(sizeof(char) * (bufsize)); /* Memory alloc for buffer */
	if (alloc_error(buffer) == -1)
		return (-1);
	*line = buffer;
	while (1) /* Infinite loop for prompt*/
	{ fflush(stdout); /* Flush the stdout in every iteratin*/
		c = _getc(); /* Read a character */
		if (c == EOF || c == '\n') /* If we hit EOF, replace it with /0 and return */
		{ *(buffer + index) = '\0';
			if (c == EOF)
				return (-1);
			else
				return (index + 1);
		}
		else if (c == ' ')
		{
			if (f == 0)
			{ f = 1;
				*(buffer + index) = c;
				index++;
			}
		}
		else
		{ f = 0;
			*(buffer + index) = c;
			index++;
		}
		if (index >= bufsize) /* If the buffer is exceeded, reallocate. */
		{ bufsize += 1024;
			buffer = _realloc(buffer, bufsize - 1024, bufsize);
			if (alloc_error(buffer) == -1)
				return (-1);
		}
	}
}



