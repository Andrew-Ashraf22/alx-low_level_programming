#include "main.h"
/**
*read_textfile - read file and prints it to stdout
*Return: num of letters  to print
*@filename: the path 
*@letters: num of letters to print 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void* buffer;
	ssize_t reader, writer;
	
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	reader = read(fd, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, reader);

	close(fd);
	free(buffer);
	return (writer);
}
