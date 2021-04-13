#ifndef _shell_
#define _shell_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <stddef.h>
#include <sys/wait.h>

/* Environmental variables */
extern char **environ;

/* Function declarations (prototypes for for builtin shell commands */
int hsh_exit(char **args, char *input);
int _cd(char **args, __attribute__((unused)) char *input);
char **_split_path(char *line, char *copy_line);

int _setenv(char *name, char *value);


/**
  * hsh_exit - Exit to the shell.
  * @args: List of arguments passed from parsing.
  * @input: Input line for free.
  * Return: 0 if works.
  */
int hsh_exit(__attribute__((unused)) char **args, char *input);

/**
  * _help - Help function
  * @args: List of arguments passed from parsing.
  * @input: Input line for free.
  * Return: 1 if works.
  */
int _help(__attribute__((unused)) char **args,
	__attribute__((unused)) char *input);
/**
  * _env - Env function
  * @args: List of arguments passed from parsing.
  * @input: Input line for free.
  * Return: 1 if works.
  */
int _env(__attribute__((unused)) char **args,
	__attribute__((unused)) char *input);

int _setenv(char *name, char *value);

/* Prototypes for main functions*/
void _loop(void);
void sigint_handler(int sig);
char *_read_line(void);
char **_split_line(char *line);
int _execute(char **args, char *input);
int _launch(char **args);
char **_check_path(char **args, int *flag);
char *_getenv(const char *name);

/* Prototypes for auxiliary funtions */
ssize_t _getline(char **b, size_t *bufsize, FILE *stream);

int _getc(void);
char *_strtok_r(char *s, const char *delim, char **save_str);
int _strcspn(char *s, const char *delim);
int _strspn(char *s, const char *delim);
char *_strtok(char *s, const char *delim);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strncmp(const char *s1, const char *s2, int n);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int alloc_error(char *buffer);
int _strlen(char *s);
int _putchar(char c);

void _puts(char *str);
int _atoi(char *s);



#endif
