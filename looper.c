#include "shell.h"

/**
 * _loop - Returns a pointer to a newly allocated space in memory
*/

void _loop(void)
{
	term = 1;

	if (isatty(STDIN_FILENO) != 1)
		term = 0;

	do
	{
		if (term != 0)
		{
			/* Print prompt line. */
			len = _strlen("$ ");
			/*printf("#cisfun$ ");*/
			write(STDOUT_FILENO, "$ ", len);
		}
	}
	
}
