#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: constant char
 * @letters: num of letters to be read and printed
 * Return: 0 if filename is NULL or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	char *buffer;
	ssize_t byte_read, byte_written;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	byte_read = read(file, buffer, letters);

	if (byte_read == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	buffer[byte_read] = '\0';
	byte_written = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_written == -1 || byte_written != byte_read)
	{
		close(file);
		return (0);
	}
	close(file);

	return (byte_written);
}
