#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string input
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; ++i)
		;

	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((i - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
