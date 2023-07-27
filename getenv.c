#include<stdio.h>
#include <stdlib.h>
#include "header.h"
#include <stdlib.h>
/**
 * _getPath - get the PATH environment variable
 * @env: environment variables
 *
 * Return: pointer to the PATH environment strings,
 */

char *_getPath(char **env)
{
	size_t i;
	char *path = NULL;

	for (i = 0; env[i] != NULL; i++)
	{
		if (_strncmpMax(env[i], "PATH=", 5) == 0)
		{
			path = env[i] + 5;
			break;
		}
	}

	return (path);
}
