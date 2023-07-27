#include "header.h"
#include <stdio.h>
/**
* _strcat - Returns array of strings to be concatenated
* @str1: the first string to concatenate
* @str2: the the string to be concatenated with
* Return:  Returns an arrays of strings
*/

char *_strcat(char *str1, char *str2)
{
	int i = 0;
	int v = 0;

	while (str1[i] != '\0')
	{
		i++;
	}
	while (str2[v] != '\0')
	{
		str1[i] = str2[v];
		i++;
		v++;
	}
	str1[i] = '\0';
	return (str1);
}
