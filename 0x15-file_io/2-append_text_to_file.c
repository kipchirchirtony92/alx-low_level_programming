#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: is the name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, buffer_write, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	fd = open(filename, O_WRONLY | O_APPEND);
	buffer_write = write(fd, text_content, len);


	if (fd == -1 || buffer_write == -1)
		return (-1);

	close(fd);
	return (1);
}
