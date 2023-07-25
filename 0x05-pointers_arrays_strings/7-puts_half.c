#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @n: length of string
 * @str: string input
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;

	int len = strlen(str);

	int start = len / 2;

	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
