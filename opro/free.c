#include "shell.h"

void freeinfo(sinfo *inf)
{
	int i = 0;

	while (inf->environ[i])
	{
		free(inf->environ[i]);
		i++;
	}
	free(inf->environ);

	i = 0;
	while (inf->command[i])
	{
		free(inf->command[i]);
		i++;
	}
	free(inf->command);
	
	free(inf->path);
	free(inf->filename);
}
