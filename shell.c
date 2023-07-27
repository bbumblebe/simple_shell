#include "header.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Entry point
* @ac: Numbers of arguments
* @av: An array of arguments
* @envp: An array of environment variable
* Return: Always 0 (Success)
**/

int main(int ac, char **av, char *envp[])
{
	char *cmdget, *execmd;
	char **string_passed;
	char **env,  **fpt;
	char *buildinExit = "exit", *fpath, *ft,  *gt, *cmdx;

	(void)envp, (void)ac, (void)av;

	while (1)
	{
		display_prompt();
		cmdget = _get_line();
		env = envp, gt = _getPath(env), fpt = parsePath(gt);
		string_passed = string_tokened(cmdget), execmd = string_passed[0];
		cmdx = extract_command(execmd);
		ft = find_file(cmdx, fpt);
		if (access(ft, X_OK) == 0)
			fpath = ft;
		if (_strcmp(execmd, buildinExit) == 0)
			break;
		if (_strcmp(execmd, "env") == 0)
			_print_env(env);
		else
			_forkexecve(fpath, string_passed, envp);
		if ((cmdget == NULL) && env == NULL)
			free(fpt), free(env), free(string_passed);
	}
	return (0);
}
