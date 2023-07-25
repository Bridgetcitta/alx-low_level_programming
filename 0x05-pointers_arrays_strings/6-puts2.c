#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string parameter input
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
