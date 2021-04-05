#include "shell.h"

/**
 * alloc_error -  Allocation error
 * storing the address of the buffer containing the text into *b.
 *
 * @buffer: buffer to check
 * Return: -1 on eror.
 */
int alloc_error(char *buffer)
{
	if (!buffer)
	{ perror("hsh: allocation error\n");
		return (-1);
	}
	else
		return (0);
}
