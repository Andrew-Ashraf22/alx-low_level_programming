#include "main.h"
/**
*append_text_to_file - append text to a file
*Return: 1 if success -1 if not
*@filename: the path
*@text_content: content to append
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int size = 0, fd, writer;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	writer = write(fd, text_content, size);
	if (writer == -1)
		return (-1);

	close(fd);
	return (1);
}
