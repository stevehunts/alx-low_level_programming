#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * is_elf - Checks if the file is an ELF file by reading its magic number.
 * @e_ident: Pointer to an array containing the file's identification bytes.
 * Return: 1 if the file is an ELF file, 0 otherwise.
 */
int is_elf(unsigned char *e_ident)
{
	return (e_ident[EI_MAG0] == ELFMAG0 &&
		e_ident[EI_MAG1] == ELFMAG1 &&
		e_ident[EI_MAG2] == ELFMAG2 &&
		e_ident[EI_MAG3] == ELFMAG3);
}

/**
 * print_elf_header - Prints selected information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
}

/**
 * main - Entry point, displays ELF header information for a given file.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (EXIT_FAILURE);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		return (EXIT_FAILURE);
	}

	if (!is_elf(header.e_ident))
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (EXIT_FAILURE);
	}

	print_elf_header(&header);

	close(fd);
	return (EXIT_SUCCESS);
}

