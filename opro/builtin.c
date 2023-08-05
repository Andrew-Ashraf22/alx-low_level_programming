#include "shell.h"

/**
 * builtin_check - find a builtin command
 * @inf: the shell info
 * @env: the enviroment
 * Return: 0 if suc 1 otherwise
 */
int builtin_check(sinfo *inf, char **env)
{
	int i;
	 char *com = NULL;
	(void)i;

	com = inf->fcommand;

	if (_strcmp(com, "exit") == 0)
	{
			myexit(inf);
			free(com);
			return (0);
	}
	else if (_strcmp(com, "env") == 0)
	{
		myenv(inf, env);
		return (0);
	}
	else if (_strcmp(com, "setenv") == 0)
	{
		mysetenv(inf, env, inf->command[1], inf->command[2], 0);
		return (0);
	}
	else if (_strcmp(com, "unsetenv") == 0)
	{
		myunsetenv(inf, env);
		return (0);
	}
	else if (_strcmp(com, "cd") == 0)
	{
		mycd(inf);
		return (0);
	}
	else if (_strcmp(com, "alias") == 0)
       	{
            myalias(inf);
	    free(com);
	    return (0);
        }

	return (1);
}


void myexit(sinfo *inf)
{
	int status;
	
	if (inf->comcount >= 2)
	{
		                status = myatoi(inf->command[1]);
	
		if (status > 255)
		{
			inf->err_num = status % 256;
			freeinfo(inf);
			exit(status % 256);
		}

		else if (0 <= status && status <= 255)
		{
			inf->err_num = status;
			freeinfo(inf);
			exit (status);
		}

		else
		{		
			erprint(inf, "Illegal number: ");
		  	strsplit("-1");
			strsplit("\n");
			return;
		}

	}
	else
	{
		inf->err_num = 0;
		freeinfo(inf);
		exit(0);
	}
}

void myenv(sinfo *inf, char **env)
{

	int i = 0;
	(void)inf;

	for ( i = 0; env[i] != NULL; i++)
       	{
    	    printf("%s\n", env[i]);
    	}
	return;

}

void mysetenv(sinfo *inf, char **env, char *var, char *val, int check)
{
	    int i, var_len, val_len;
  	  char *new_env;


   if (inf->comcount != 3 && check == 0)
   {
	   erprint(inf,"wrong number of arugments");
	return;
   }

   var_len = _strlen(var);
   val_len = _strlen(val);


    for (i = 0; env[i] != NULL; i++)
    {

        if (_strncmp(env[i], var, var_len) == 0 && env[i][var_len] == '=') {
          
            new_env = (char *)malloc(var_len + val_len + 2);
            if (new_env == NULL) 
	    {
                erprint(inf,"Failed to allocate memory\n");
                return;
            }
            sprintf(new_env, "%s=%s", var, val);
            env[i] = new_env;
            return;
        }
    }

    new_env = malloc((var_len + val_len + 2) * (sizeof(char)));

    if (new_env == NULL)
    {
        erprint(inf, "Failed to allocate memory\n");
        return;
    }
    sprintf(new_env, "%s=%s", var, val);

    for (i = 0; env[i] != NULL; i++) {}

    env = (char **)realloc(env,( i ) * sizeof(char *));

	if (env == NULL)
	{
	    erprint(inf, "Failed to allocate memory\n");
   		 return;
	}

	env[i] = new_env;
	env[i + 1] = NULL;
	return;
}




void myunsetenv(sinfo *inf, char **env)
{
	int index, i;
	char *name = inf->command[1];
	size_t name_len;

	if (inf->comcount < 2)
	{
		erprint(inf, "WRONG NUMBER OF ARGUMENTS");
		return;
	}

     name_len = _strlen(name);

     index = -1;

    for ( i = 0; env[i] != NULL; i++)
    {
        if (_strncmp(env[i], name, name_len) == 0 && env[i][name_len] == '=')
       	{
            index = i;
            break;
        }
    }

    if (index != -1)
    {

        free(env[index]);

        for (i = index; env[i] != NULL; i++)
       	{
            env[i] = env[i + 1];
        }
	return;
    }
    erprint(inf, "Enviroment variable NOT FOUND");
    return;
}



 char **make_env(sinfo *inf)
{
	int c = 0, i = 0, len, size = 0;
	char *var;
	  char **env = NULL;
        (void)inf;
	(void)var;

	 while (environ[c] != NULL)
	 {
       		 c++;
	 }

    
    env = (char **)malloc((c + 1) * sizeof(char *));
    if (env == NULL) 
    {
        erprint(inf, "Failed to allocate memory\n");
        return (NULL);
    }

    
    for ( i = 0; i < c; i++)
    {

	len = _strlen(environ[i]);
	
	env[i] = malloc(sizeof(char) * (len + 1));
	_strcpy(env[i], environ[i]);
	size++;

        if (env[i] == NULL)
       	{
            erprint(inf, "Failed to allocate memory\n");
            return (NULL);
        }
    }

    inf->size = size;

    env[c] = NULL;
    return (env);
}



char *mygetenv(sinfo *inf, char *name)
{
	int i = 0;
	size_t len;
	char **env = inf->environ;

	len = _strlen(name);

	for (i = 0; env[i] != NULL; i++)
    {
        if (_strncmp(env[i], name, len) == 0 && env[i][len] == '=') 
	{

		return (env[i] + len + 1);
        }
    }

	return (NULL);
}
