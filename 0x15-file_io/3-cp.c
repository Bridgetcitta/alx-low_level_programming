#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * print_error - prints error
 * @message: string input
 * @exit_code: parameter member
 * Return: 0 if success
 */
void print_error(char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
 * main - entry point
 * @argc: parameter member
 * @argv: pointed input
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t byte_read, byte_written;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: can't read from file %s", errno == ENOENT ? 98 : 99);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s", 99);
	} while ((byte_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		byte_written = write(fd_to, buffer, byte_read);
		if (byte_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error("Error: Can't write to %s", 99);
		}
	}
	if (byte_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Error: Can't read fro file %s", 98);
	}
	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %d", 100);
	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %d", 100);
	return (0);
}
