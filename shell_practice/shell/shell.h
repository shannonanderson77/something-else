#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

char *shell_getline(void);
void shell_loop(void);
char **shell_split(char *line);
int shell_launch(char **args);

#endif
