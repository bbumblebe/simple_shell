#include<stdlib.h>
#include "header.h"
#include <string.h>
/**
* parsePath - Returns arrays if tokenize strings found in PATH env
* @env: the PATH env
* Return:  Returns an arrays of strings
*/

char **parsePath(char *env)
{
	char *pth;
	char **dpath;
	char *token;
	int i, j;
	int m = 0;

	pth = env;
	for (i = 0; pth[i] != '\0'; i++)
	{
		if (pth[i] == ':')
			m++;
	}
	if ((m + 1) == _strlen(pth))
		return (NULL);
	dpath = (char **)malloc(sizeof(char *) * (m + 2));
	if (dpath == NULL)
		return (NULL);
	token = strtok(pth, ":");
	j = 0;
	while (token != NULL)
	{
		dpath[j] = token;
		j++;
		token = strtok(NULL, ":");
	}
	dpath[j] = NULL;
	return (dpath);
}

