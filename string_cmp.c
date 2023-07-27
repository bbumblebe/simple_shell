#include "header.h"
#include <stdio.h>
/**
* _strcmp - Returns array of strings to be compared
* @str1: the first string to compared
* @str2: the the string to be compared with
* Return: Returns an arrays of strings
*/

int _strcmp(const char *str1, const char *str2)
{
	int i = 0;

	while (str1[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
