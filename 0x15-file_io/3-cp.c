#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * check_stat - Checks the status of file operations and handles errors.
 * @stat: The status result of a file operation.
 * @fd: The file descriptor for the close operation, if applicable.
 * @filename: The file involved in the operation.
 * @mode: The operation mode ('r', 'w', 'c').
 *
 * Description: Checks file operation results, prints errors, exits if needed.
 */
void check_stat(int stat, int fd, char *filename, char mode)
{
	if (stat == -1)
	{
		if (mode == 'r')
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		else if (mode == 'w')
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
		else if (mode == 'c')
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Command-line arguments.
 *
 * Return: 0 on success, exits on error with specific code.
 *
 * Description: Copies content from one file to another, handles errors.
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	check_stat(src, -1, argv[1], 'r');

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	check_stat(dest, -1, argv[2], 'w');

	while ((n_read = read(src, buffer, 1024)) > 0)
	{
		wrote = write(dest, buffer, n_read);
		if (wrote != n_read)
		{
			check_stat(-1, dest, argv[2], 'w');
		}
	}
	check_stat(n_read, src, argv[1], 'r');

	check_stat(close(src), src, NULL, 'c');
	check_stat(close(dest), dest, NULL, 'c');

	return (0);
}

