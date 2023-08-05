#include "shell.h"

char **line_parse(char *command, int charr, char *delim)
{
    char **argv;
    char *command_copy;
    char *command_copy2;
    char *token;
    int ntoken = 0, i = 0;

    command_copy = malloc(sizeof(char) * (charr + 1));
    command_copy2 = malloc(sizeof(char) * (charr + 1));

    if (command_copy == NULL)
    {
        perror("tsh: memory allocation error");
	free(command_copy2);
        return (NULL);
    }
    if (command_copy2 == NULL)
    {
	free(command_copy);
    	perror("Error locating ");
	return (NULL);
    }

     _strcpy(command_copy, command);
     _strcpy(command_copy2, command);

    
    if (charr == -1)
    {
	free(command_copy);
	free(command_copy2);
        printf("Exiting shell....\n");
        return (NULL);
    }
    else 
    {

        
        token = strtok(command_copy2, delim);

        
        while (token != NULL){
            ntoken++;
            token = strtok(NULL, delim);
        }
        ntoken++;
        

       
        argv = malloc(sizeof(char *) * ntoken);

	if (argv == NULL)
	{
		printf("failed allocationg mem");
		free(command_copy);
		free(command_copy2);
		return (NULL);
	}

        token = strtok(command_copy, delim);

        for (i = 0; token != NULL; i++)
	{
            argv[i] = malloc(sizeof(char) * (strlen(token) + 1));
            strcpy(argv[i], token);
            token = strtok(NULL, delim);
        }
        argv[i] = NULL;
	free(command_copy);
	free(command_copy2);
        return (argv);
}
}
