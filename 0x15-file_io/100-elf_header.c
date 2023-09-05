#include "main.h"
#include <elf.h>
void print_error(const char *message)
{

	dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * print_error - prints errors
 * *@message: paramter mem
 * main - entry
 * @argv: pointer intput
 * @argc: parmeter memb
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return (98);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Could not open the file");
		return (98);
	}
/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Could not read ELF header");
		close(fd);
		return (98);
	}
	close(fd);
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
		return (98);
	}
	printf("Magic: %c%c%c%c\n", elf_header.e_ident[EI_MAG0], 
			elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2], 
			elf_header.e_ident[EI_MAG3]);
	printf("Class: %d-bit\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "unknown");
	printf("Version: %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV
			? "UNIX - System V" : "Other");
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			elf_header.e_type == ET_DYN ? "DYN (Shared object file)" :
			elf_header.e_type == ET_REL ? "REL (Relocatable file)" : "unknown");
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);
	return (0);
}
