#ifndef _shell_
#define _shell_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Prototypes for main functions*/
void _loop(void);
void sigint_handler(int sig);
char *_read_line(void);
char **_split_line(char *line);

/* Prototypes for auxiliary funtions */
int _strlen(char *s);



#endif
