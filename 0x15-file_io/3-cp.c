#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * print_error - prints error
 * Return: 0 if success
 */
void print_error(void)
{
	dprintf(STDERR_FILENO, "Error: cp file_from file_to\n");
}
/**
 * main - entry point
 * @argc: parameter member
 * @argv: pointer input
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	char *file_from = argv[1], *file_to = argv[2], buffer[BUFFER_SIZE];
	int fd_from, fd_to;
	ssize_t byte_read, byte_written;

	if (argc != 3)
	{
		print_error();
		return (97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			return (99);
		}
		byte_written = write(fd_to, buffer, byte_read);
		if (fd_to == -1 || byte_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
		byte_read = read(fd_from, buffer, 1024);
		fd_to = open(file_to, O_WRONLY | O_APPEND);
	} while (byte_read > 0);

	close(fd_from);
	close(fd_to);
	return (0);
}
