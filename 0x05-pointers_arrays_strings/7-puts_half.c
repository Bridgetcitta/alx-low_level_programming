#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string input
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n;

	int len = strlen(str);

	int start = len / 2;

	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}
	for (n = start; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
