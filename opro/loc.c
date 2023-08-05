#include "shell.h"

char *getloc(char *com)
{
	char *path, *copy, *token, *file_path;
    int len, cdlength;

    struct stat buffer;


   path = getenv("PATH");

    if (path){
        
        copy = strdup(path);
   
        len = strlen(com);

       
        token = strtok(copy, ":");

        while(token != NULL){
            
            cdlength = strlen(token);
            
            file_path = malloc(len + cdlength + 2);
          
            strcpy(file_path, token);
            strcat(file_path, "/");
            strcat(file_path, com);
            strcat(file_path, "\0");

            
            if (stat(file_path, &buffer) == 0){
               

                
                free(copy);

                return (file_path);
            }
            else{
               
                token = strtok(NULL, ":");
		free(file_path);

            }

        }

       
        free(copy);

        
        if (stat(com, &buffer) == 0)
        {
            return (com);
        }

	free(file_path);
        return (NULL);

    }

    return (NULL);
}

