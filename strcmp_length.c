#include "header.h"

/**
 * _strncmpMax - compare strings to check if they are equal'
 * @str1: First string to be compared with.
 * @str2: Fecond string to be compared.
 * @max: maximum number of bytes to be compared
 *
 * Return: 0 if strings are equal, positive or negative integer otherwise
*/

int _strncmpMax(const char *str1, const char *str2, int max)
{
	int i;

	for (i = 0; i < max && str1[i] && str2[i]; i++)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
	}
	if (i == max)
		return (0);
	return (str1[i] - str2[i]);
}
