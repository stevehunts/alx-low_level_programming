#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status = 1;
	ssize_t len = 0, written;

	if (filename == NULL)
		return (-1);

	/* Open the file in append mode. Do not create if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);  /* File doesn't exist or lacks write permissions */

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		written = write(fd, text_content, len);
		if (written == -1)
			status = -1;  /* Writing failed */
	}

	close(fd);
	return (status);
}

