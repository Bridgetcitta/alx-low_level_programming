#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{

		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');

}
