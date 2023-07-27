#include "header.h"
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
/**
* find_file - find the command typed by user in each of the subdirectory
* @cmd: the command
* @sub_dir: the subdirectory to search
* Return: the concatenation strings
*/
char *find_file(char *cmd, char **sub_dir)
{
	int i, fl = 0, struct dirent *stru_name = NULL;
	DIR *dir = NULL, char *dir_path = malloc(sizeof(char) * 1024);

	if (dir_path == NULL)
	{
		perror("malloc");
		return (NULL);
	}
	dir_path[0] = '\0';
	for (i = 0; sub_dir[i] != NULL; i++)
	{
		dir = opendir(sub_dir[i]);
		if (dir == NULL)
		{
			perror("opendir");
			return (NULL);
		}
		while ((stru_name = readdir(dir)) != NULL)
		{
			if (stru_name->d_type == DT_REG && _strcmp(stru_name->d_name, cmd) == 0)
			{
				_strcat(dir_path, sub_dir[i]), _strcat(dir_path, "/"), _strcat(dir_path, cmd);
				fl = 1;
				break;
			}
		}
		closedir(dir);
		if (fl == 1)
			break;
	}
	if (sub_dir[i] == NULL)
		return ("0");
	return (dir_path);
}
