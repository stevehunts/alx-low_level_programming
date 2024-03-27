#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes a text content to it
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, written;

	if (filename == NULL)
		return (-1);

	/* Open / create file with rw------- permissions, truncate if exists */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, calculate its length */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/* Write text_content to file */
	written = write(fd, text_content, len);

	close(fd);

	/* Check if write was successful */
	if (written == -1)
		return (-1);

	return (1);
}

