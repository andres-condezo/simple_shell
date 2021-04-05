#include "shell.h"

/**
 * _loop - Returns a pointer to a newly allocated space in memory
*/
void _loop(void)
{
	char *input; /*	char  **args;*/
	int inte = 1, len, status;

	if (isatty(STDIN_FILENO) != 1)
		inte = 0;

	do {
		if (inte != 0)
		{
			/* Print prompt line. */
			len = _strlen("[._.] ");
			write(STDOUT_FILENO, "[._.] ", len);
		}
		input = _read_line(); /* Read from prompt line (input).*/
		if (input == NULL)
			return;

/*
*		args = _split_line(input); Splits input into arguments.
*		if (args == NULL)
*		{
*			free(input);
*			return;
*		}
*		status = _execute(args, input); Execute according to arguments.
*		status = 1
*/
/*		 Free input and arguments. */
		free(input);
/*		free(args);*/
	} while (status == 1);
}
