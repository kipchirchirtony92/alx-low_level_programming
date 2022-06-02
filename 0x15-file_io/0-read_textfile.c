#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - reads the text file and prints it to the POSIX stdout
 * @letters: is the number of letters it should read and print
 * @filename:  pointer to the file name
 * Return: the actual number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);


	if (fd == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (wrt);
}
