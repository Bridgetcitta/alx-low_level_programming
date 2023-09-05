#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string
 * Return: 1 if success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b_w;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		b_w = write(f, text_content, strlen(text_content));
		if (b_w == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
