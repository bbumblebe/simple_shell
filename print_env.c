#include<stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#include <unistd.h>

/**
 * _print_env - printing all environment variable
 * @env: environment variables
 *
 * Return: return nothing.
 */

void _print_env(char **env)
{
	int count = 0;

	while (env[count])
	{
		write(STDOUT_FILENO, env[count], _strlen(env[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}
}
