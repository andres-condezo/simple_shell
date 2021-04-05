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
ssize_t _getline(char **b, size_t *bufsize, FILE *stream);
int _getc(void);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int alloc_error(char *buffer);


int _strlen(char *s);



#endif
