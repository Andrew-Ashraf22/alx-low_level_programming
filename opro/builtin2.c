#include "shell.h"


int mycd(sinfo *inf)
{
	char *des = inf->command[1], *MYOLDPWD = "/", *temp;

	if (des == NULL)
	{
		temp = mygetenv(inf, "PWD");

		des = mygetenv(inf, "HOME");

		if (des == NULL)
		{
			printf("Couludn't get env variable HOME");
			return (1);
		}

		if (chdir(des) != 0)
		{
		
			printf("couldn't change to directory %s\n", des);
			return (1);
		}
		mysetenv(inf, inf->environ, "PWD", mygetenv(inf, "HOME"), 1);
		mysetenv(inf, inf->environ, "OLDPWD", temp, 1);
		return (0);
	}

	else if (strcmp(des, "-") == 0)
	{
		temp = mygetenv(inf, "PWD");

                MYOLDPWD = mygetenv(inf, "OLDPWD");

		if (!(MYOLDPWD))
		{
			printf("no previous directories");
			return (1);
		}

		if (chdir(MYOLDPWD) != 0)
		{
			printf("couldn't move to %s\n", MYOLDPWD);
			return (1);
		}
		mysetenv(inf, inf->environ, "PWD", MYOLDPWD, 1);
		mysetenv(inf, inf->environ, "OLDPWD", temp, 1);
		return (0);
	}

	else if (des)
	{
		temp = mygetenv(inf, "PWD");
		   
		if (chdir(des) != 0)
		{
			printf("couldnt move to %s\n", des);
			return (1);
		}
		mysetenv(inf, inf->environ, "PWD", des, 1);
		mysetenv(inf, inf->environ, "OLDPWD", temp, 1);
		return (0);
	}
	else 
	{
		printf("error in function cd");
		return (1);
	}
}
