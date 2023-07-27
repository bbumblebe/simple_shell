#ifndef HEADER_H
#define HEADER_H
char *_get_line(void);
char **string_tokened(char *strings);
void _forkexecve(char *cmd, char **strarrs, char **envp);
int _strcmp(const char *str1, const char *str2);
char *_strcat(char *str1, char *str2);
char *find_file(char *cmd, char **sub_dir);
char *_getPath(char **env);
int _strncmpMax(const char *str1, const char *str2, int max);
void display_prompt(void);
int _strlen(char *str);
char *extract_command(char *command);
char **parsePath(char *env);
void  _print_env(char **env);

#endif

