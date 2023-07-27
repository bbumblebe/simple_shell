#include "header.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
* display_prompt - to display prompt for user to input value
* * Return: no return
*/

void display_prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "CisFun:\n", 8);
}
