#include "shell.h"

int main(int argc, char **argv){
  char *promp = " $ ";
  char *fullcommand;
  size_t n = 0; 
  int j = 0, i = 0, k = 0;
  size_t char_read;
  sinfo inf = {NULL, NULL, NULL, 0, 0 , 0, NULL, 0, NULL, 0}; 
  char **env = make_env(&inf), **ar;
  FILE *input = NULL, *file;
  int is_pipe = !isatty(STDIN_FILENO);
  int state = 1;
(void)i;
(void)k;
(void)input;

	if (is_pipe)
	{
		state = 0;
	}
	inf.environ = env;
	inf.filename = strdup(argv[0]);

	if (argc == 1)
	{

	do
 	{
		ar = NULL;
		inf.command = NULL;
		inf.fcommand = NULL;
		n = 0;
		char_read = 0;
		fullcommand = NULL;

		if (state)
		{
 		     printf("%s", promp);
		}

      inf.line_count++;

      char_read = getline(&fullcommand, &n, stdin);
	

        if ((int)char_read == -1){
            perror(" self Error reading input");
            return (-1);
        }

	rmcomment(fullcommand);

	for (i = 0; i < numAliases; i++)
	{
		if (_strcmp(aliasNames[i], fullcommand) == 0)
       		 {
			_strcpy(fullcommand, aliasValues[i]);
			break;
		 }
	}

      ar = line_parse(fullcommand, char_read, " \n");

      free(fullcommand);

      for ( j = 0; ar[j]; j++){};

      inf.comcount = j;


      inf.command = ar; 
      inf.fcommand = ar[0];
      
                           
      if (builtin_check(&inf, env) == 0)
      {
      	continue;
      }
      command_excute(&inf, ar);
	
    }while (state);

	freeinfo(&inf);
	return (0);

	}

	else 
	{
		int fd = open(argv[1], O_RDONLY);
        if (fd < 0) {
            printf("Error: Unable to open file %s\n", argv[1]);
            exit(1);
        }

	file = fdopen(fd, "r");

	if (file == NULL) {
        printf("Error: Unable to open file %s\n", argv[1]);
        exit(1);
    }	

	char_read = 1;

      while (char_read)
      {
	      fullcommand = NULL;
	      n = 0;

	      char_read = getline(&fullcommand, &n, file);
       
	      if ((int)char_read == -1)
	      {
	      	printf("error in char read");
		close(fd);
		fclose(file);
		freeinfo(&inf);
		exit(1);
	      }
         
            fullcommand[strcspn(fullcommand, "\n")] = '\0';

	    ar = line_parse(fullcommand, char_read, " \n");
	    free(fullcommand);
	
	    for (j = 0; ar[j]; j++){};

	    inf.comcount = j;

	    inf.command = ar;
	    inf.fcommand = ar[0];
            
	if (builtin_check(&inf, env) == 0)
      {
	continue;
      }
	else
	{
      command_excute(&inf, ar);
	}

      }
        close(fd);
      fclose(file);
      freeinfo(&inf);
      free(ar);
      free(fullcommand);
        return (1);
      }
  return (0);

}
