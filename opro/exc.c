#include "shell.h"

void command_excute(sinfo *inf, char **full_command)
{
    char *command = NULL, *newcommand = NULL;
    pid_t id;
    int s = 0;

    if (full_command)
    {
        command = full_command[0];

	newcommand = getloc(command);

	inf->path = newcommand;


	id = fork();

	if (id < 0)
	{
		perror("Error in forking:");
	}
	if (id == 0)
	{
	        if (execve(newcommand, full_command, NULL) == -1)
		{
			    	perror("child failed");
				exit(EXIT_FAILURE);
		}
    
	}
	else
	{
		waitpid(id, &s, 0);
		return;

	}
}
return;
}
