#include "shell.h"

/**
 * _loop - Returns a pointer to a newly allocated space in memory
*/

void _loop(void)
{
	inte = 1;

	if (isatty(STDIN_FILENO) != 1)
		inte = 0;

	do{
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

}
