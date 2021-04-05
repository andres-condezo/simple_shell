/**
 * _strlen - Find the lenght of a string.
 * @s: string.
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
	}
	return (cont);
}

