#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void print_error(const char *msg, const char *filename, int status);
void close_file(int fd);

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		print_error("Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
		print_error("Can't write to", argv[2], 99);

	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
			print_error("Can't write to", argv[2], 99);
	}

	if (read_count < 0)
		print_error("Can't read from file", argv[1], 98);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * print_error - prints an error message to standard error and exits.
 * @msg: error message
 * @filename: name of the file that caused the error
 * @status: exit status
 */
void print_error(const char *msg, const char *filename, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(status);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

