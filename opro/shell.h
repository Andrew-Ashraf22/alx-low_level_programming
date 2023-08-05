#ifndef shell_h
#define shell_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <fcntl.h>
#include <ctype.h>

#define HISMAX 10

#define MAX_ALIASES 100
#define MAX_ALIAS_NAME 50
#define MAX_ALIAS_VALUE 100


extern char **environ;

char aliasNames[MAX_ALIASES][MAX_ALIAS_NAME];
char aliasValues[MAX_ALIASES][MAX_ALIAS_VALUE];
int numAliases;

/**
 * struct llist - singly linked list
 * @num: a number
 * @str: a string
 * @next: points to the next node
 */
typedef struct llist
{
        int num;
        char *str;
        struct llist *next;
} list;



/* String functions */
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
void _strcpy(char *dest, const char *src);
char *_strncpy(char *dest, char *src, int n);
size_t _strlen(const char *str);
char *_strchr(char *s, char c);
char *_strcat(char *dest, char *src);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void* myrealloc(void* ptr, size_t old_size, size_t new_size);
void *__realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 * struct shellinfo - contains information about the shell to make
 * functions calls easier 
 * @command : contains the full command
 * @fcommand : the first command
 * @path: path of the command
 * @argc: number of arguments
 * @line_count: counts number of lines excuted or not
 * @err_num: the error code exit()
 * @filename: the filename
 * @env: linked list local copy of environ
 * @environ: custom modified copy of environ from LL env
 * @history: the history node
 * @alias: the alias node
 * @env_changed: on if environ was changed
 * @readfd: the fd from which to read line input
 * @histcount: the history line number count
 */
typedef struct shellinfo
{
        char **command;
        char *path;
	char *fcommand;
        int argc;
        unsigned int line_count;
        int err_num;
        char *filename;
        int size;
        char **environ;
	int comcount;
} sinfo;


void strsplit(char *s);
void stderr_print(char c);
void erprint(sinfo *inf, char *str);


void freeinfo(sinfo *inf);

void rmcomment(char *s);

/**
 * struct builtin - match builtin to its function
 * @name: the entered builtin command
 * @func: the function to the builting command
 */
typedef struct builtin
{
        char *name;
        int (*func)(sinfo *);
} builtins;



char **line_parse(char *command, int charr, char *delim);
void command_excute(sinfo *inf, char **full_command);
char *getloc(char *com);
int cmo_check(char *str);
void print_err(char *str);
void prerror(sinfo *inf, char *error);
void fill_info(sinfo *inf, char **argv);
int myatoi(char *s);

void myenv(sinfo *inf, char **env );
int builtin_check(sinfo *inf, char **env);
void myexit(sinfo *inf);
void mysetenv(sinfo *inf, char **env, char *var, char *val, int check);
void myunsetenv(sinfo *inf, char **env);
char **make_env(sinfo *inf);
char *mygetenv(sinfo *inf, char *name);
int mycd(sinfo *inf);
void printAliases();
void printAlias(char* name);
void defineAlias(char* name, char* value);
void myalias(sinfo *inf);
#endif
