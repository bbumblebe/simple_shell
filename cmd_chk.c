#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * extract_command - Returns a substring.
 * @command: The string to search
 *
 * Return: A newly allocated string containing the substring.
 */
char *extract_command(char *command)
{

	const char *prefix = "/bin/";
	int prefix_len = 5;
	int i;
	int command_len = _strlen(command);
	int result_len = command_len - prefix_len;

	if (_strncmpMax(command, prefix, prefix_len) == 0)
	{
		char *result = (char *) malloc((result_len + 1) * sizeof(char));

		for (i = 0; i < result_len; i++)
		{
			result[i] = command[i + prefix_len];
		}
		result[result_len] = '\0';
		return (result);
	}
	else
	{
		char *result = (char *) malloc((command_len + 1) * sizeof(char));

		for (i = 0; i < command_len; i++)
			result[i] = command[i];
		result[command_len] = '\0';
		return (result);
	}
}
