#include<stdio.h>
#include "header.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * _get_line -to store a value of command.
 * Return: return an array of string
*/

char *_get_line(void)
{
	ssize_t num_getline;
	size_t numbuff = 10;
	int x = 20;
	char *cmdget;

	cmdget = malloc(sizeof(char) * x + 2);

	num_getline = getline(&cmdget, &numbuff, stdin);

	if (num_getline == -1)
	{
		free(cmdget);
		exit(1);
	}
	if (cmdget[_strlen(cmdget) - 1] == '\n')
		cmdget[_strlen(cmdget) - 1] = '\0';
	return (cmdget);
}
