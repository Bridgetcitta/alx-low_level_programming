#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: parameter input of string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, length = 0;

	char *ptr = s;

	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
