#include "main.h"
/**
*create_file - creates a file and put its content
*Return: 1 if success -1 if not
*@filename: the path
*@text_content: content to write
*/
int create_file(const char *filename, char *text_content)
{
	int size = 0, writer, fd;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	writer = write(fd, text_content, size);
	if (writer == -1 || writer == -1)
		return (-1);

	close(fd);

	return (1);
}
