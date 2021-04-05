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

/**
 * _realloc -  Reallocates a memory block using malloc and free.
 * @ptr: Pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: returns a pointer to the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min_size;
	char *newptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
			if (newptr == NULL)
				return (NULL);
			else
				return (newptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size > new_size)
		min_size = new_size;
	else
		min_size = old_size;

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (ptr);

	for (i = 0 ; i < min_size ; i++)
		*(newptr + i) = *((char *)ptr + i);

	if (ptr != NULL)
		free(ptr);

	return (newptr);
}
