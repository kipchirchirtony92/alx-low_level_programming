#include "main.h"


#include <stdio.h>
#include <stdlib.h>


/**
 * close_file - closes the file descriptor
 * @fd: file desciptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



/**
 * create_buffer - Allocate 1024 bytes for a buffer
 * @file: the name of the file
 * Return: a pointer to the allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(99);
	}
	return (buffer);
}


/**
 * main - copies the content of one file to another file
 * @argc: the argument counter supplied to the program
 * @argv: a pointer to array of arguments
 * Return: 0 on success
 */



int main(int argc, char *argv[])
{
	int from_fd, to_fd, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	rd = read(from_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(to_fd, buffer, rd);
		if (to_fd == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);

	return (0);
}
