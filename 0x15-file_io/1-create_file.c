#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: is the name of the file to be created
 * @text_content: is a NULL terminated string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b_w;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		b_w = write(file, text_content, strlen(text_content));
		if (b_w == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
