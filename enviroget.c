#include "shell.h"
/**
 * _getenv - Find a variable in all environment variables.
 * @name: Name of the environment variable.
 * Return: All the content into the environment variable.
 */
char *_getenv(const char *name)
{
	size_t len;
	char **ep;

	/* Get NAME lenght*/
	len = _strlen((char *)name);

	if (environ == NULL || name[0] == '\0')
		return (NULL);
		len--;
	for (ep = environ; *ep != NULL; ep++)
	{
		if (!_strncmp(*ep, name, len) && (*ep)[len + 1] == '=')
		return (&(*ep)[len + 2]);
	}

	return (NULL);
}
