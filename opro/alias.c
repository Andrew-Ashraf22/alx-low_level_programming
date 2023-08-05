#include "shell.h"

void myalias(sinfo *inf)
{
	 char *name, *value;
	int i = 1;
	
	if (inf->comcount == 1)
	{
		printAliases();
	}
	else if (strchr(inf->command[i], '=') != NULL)
	 {
		 for (i = 1; inf->command[i]; i++)
		 {

			 name = strtok(inf->command[i], "=");
			 value = strtok(NULL, "=");
 			 if (value != NULL)
 			 {
    				defineAlias(name, value);
       			 }
 			 else	
			 {
		    		printf("Invalid alias syntax.\n");
               		 }
	
	 	 }
	  }
       	else 
	{
		for (i = 1; inf->command[i]; i++)
		{
  	              printAlias(inf->command[i]);
		}
        }
    	return;
}



void printAliases()
{
	int i = 0;

    for (i = 0; i < numAliases; i++)
    {
        printf("%s='%s'\n", aliasNames[i], aliasValues[i]);
    }
}

void printAlias(char* name)
{
	int i = 0;

    for ( i = 0; i < numAliases; i++)
    {
        if (_strcmp(aliasNames[i], name) == 0)
       	{
            printf("%s='%s'\n", aliasNames[i], aliasValues[i]);
            return;
        }
    }
}

void defineAlias(char* name, char* value)
{
	int i = 0;

    for ( i = 0; i < numAliases; i++)
    {
        if (_strcmp(aliasNames[i], name) == 0)
       	{
            _strcpy(aliasValues[i], value);
            return;
        }
    }

    if (numAliases < MAX_ALIASES)
    {
        _strcpy(aliasNames[numAliases], name);
        _strcpy(aliasValues[numAliases], value);
        numAliases++;
    }
    else 
    {
        printf("Maximum number of aliases reached.\n");
    }
}
