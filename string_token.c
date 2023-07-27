#include "header.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
*string_tokened - Returns the value of tokenized strings
*@strings: Array of strings
*Return: Returns an arrays of strings
*/
char **string_tokened(char *strings)
{
	char **arr_strings;
	char *toks;
	int x = 0;
	int j = 0;
	char *delim = " ";

	arr_strings = malloc(sizeof(char *) * 10);
	if (arr_strings == NULL)
	{
		perror("can't allocate memory");
		exit(1);
	}
	toks = strtok(strings, delim);
	while (toks != NULL)
	{
		while (toks[j])
		{
			if (toks[j] == '\n')
				toks[j] = '\0';
			j++;
		}
		arr_strings[x] = toks;
		x++;
		j = 0;
		toks = strtok(NULL, delim);
	}
	arr_strings[x] = NULL;
	return (arr_strings);
}

