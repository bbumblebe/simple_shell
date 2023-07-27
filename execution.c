#include "header.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/types.h>
/**
* _forkexecve - Entry point of the function
* @strarrs: Array of strings
* @envp: An environment variables
* @cmd: The command to function
* Return: Returns an arrays of strings
*/

void _forkexecve(char *cmd, char **strarrs, char **envp)
{
	pid_t pid;
	int fcall;
	int status;

	pid = fork();

	if (pid < 0)
		perror("fork error");
	if (pid == 0)
	{
		fcall = execve(cmd, strarrs, envp);
		if (fcall == -1)
			perror("./shell:No such file directory\n");
	}
	else
	{
		wait(&status);
	}
}
