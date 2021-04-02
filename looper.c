#include "shell.h"

/**
 * _loop - Returns a pointer to a newly allocated space in memory
*/

void _loop(void)
{
	char *input , **args;
	int inte = 1, len, status;

	if (isatty(STDIN_FILENO) != 1)
		inte = 0;

	do {
		if (inte != 0)
		{
			/* Print prompt line. */
			len = _strlen("[._.] ");
			/*printf("#cisfun$ ");*/
			write(STDOUT_FILENO, "[._.] ", len);
		}

		/*Read from promt line (input) */
		input = _read_line();
		if (input == NULL)
			return;
	}

		/* Split readed input into arguments. */
		args = _split_line(input);
		if (args == NULL)
		{
			free(input);
			return;
		}

		/* Execute according to arguments. */
		status = _execute(args, input);

		/* Free input and arguments. */
		free(input);
		free(args);

	} while (status == 1);

}
