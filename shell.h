#ifndef _shell_
#define _shell_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

/* Prototypes for main functions*/
void _loop(void);
void sigint_handler(int sig);
char *_read_line(void);
char **_split_line(char *line);

/* Prototypes for auxiliary funtions */
ssize_t _getline(char **b, size_t *bufsize, FILE *stream);
int _getc(void);

char *_strtok_r(char *s, const char *delim, char **save_str);

int _strcspn(char *s, const char *delim);

int _strspn(char *s, const char *delim);

char *_strtok(char *s, const char *delim);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int alloc_error(char *buffer);

int _strlen(char *s);

int _putchar(char c);

#endif
