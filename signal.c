#include "shell.h"

/**
  * sigint_handler - Signal handler.
  * @sig: signal.
  */

void sigint_handler(int sig)
{
	int len;

	(void)sig;
	len = _strlen("[._.] ");
	_putchar('\n');
	write(STDOUT_FILENO, "[._.] ", len);
	fflush(stdout);
}
