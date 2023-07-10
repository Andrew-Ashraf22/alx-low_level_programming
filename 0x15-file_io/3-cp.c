#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void closer(int tempfd);
/**
 * main - Copies conntent from file1 to file2
 * @argc: The number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
        int reader, writer, fdfrom, fdto;
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);
        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }
        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                free(buffer);
                exit(97);
        }
        fdfrom = open(argv[1], O_RDONLY);
        reader = read(fdfrom, buffer, 1024);
        fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        do {
                if (fdfrom < 0 || reader < 0)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                        free(buffer);
                    writer = write(fdto, buffer, reader);
                if (fdto < 0 || writer < 0)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
                        free(buffer);
                        exit(99);
                }
                reader = read(fdfrom, buffer, 1024);
                fdto = open(argv[2], O_WRONLY | O_APPEND);
        } while (reader > 0);
        free(buffer);
        closer(fdfrom);
        closer(fdto);
        return (0);
}

/**
 * closer - Closes file
 * @tempfd: The file descriptor to close
 */
void closer(int tempfd)
{
        int s;

        s = close(tempfd);

        if (s == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tempfd);
                exit(100);
        }
}
