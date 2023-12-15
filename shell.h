#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"
extern char **environ;


/* main.c */
char *read_line(void);

/* string.c */
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

/* tokenizer.c */
char **tokenizer(char *line);

/* _execute.c */
int _execute(char **command, char **argv);

/* free_array.c */
void free_array(char **arr);
#endif

