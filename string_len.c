#include<stdio.h>
#include"header.h"
/**
 * _strlen - find the length of the string'
 * @str: strings passed to the function.
 * Return: length of a string
 */

int _strlen(char *str)
{
	const char *p = str;

	while (*p != '\0')
		p++;
	return (p - str);
}
