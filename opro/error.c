#include "shell.h"

/**
 * strsplit - split string to chars and send them to stderr
 * @s: string to split and print
 */
void strsplit(char *s)
{
	int i = 0;

	if (!(s))
	{
		return;
	}

	if (s[0] == '-') {
        stderr_print('-');
        i++;
    }
	while (s[i] != '\0')
	{
		stderr_print(s[i]);
		i++;
	}
	return;
}

/**
 * stderr_print - prints char to stderr
 * @c: char to print
 */
void stderr_print(char c)
{
		write(STDERR_FILENO, &c, 1);
}


/**
 * erprint - prints the standard error msg
 * @inf: the shell info
 * @str: error string to print
 */
void erprint(sinfo *inf, char *str)
{
	int count, temp;
	char *h = NULL;

	count = 0;
	temp = inf->line_count;

	while (temp != 0)
	{
		count++;
		temp /= 10;
	}
	h = malloc(sizeof(char) * (count + 2));

	if (!h)
	{
		printf("error in error ");
		return;

	}

	strsplit(inf->filename);
	strsplit(": ");
	sprintf(h, "%d", inf->line_count);
	strsplit(h);
	strsplit(": ");
	strsplit(inf->command[0]);
	strsplit(": ");
	strsplit(str);
}
