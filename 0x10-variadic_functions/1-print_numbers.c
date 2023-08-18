#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: constant integer
 * @separator:  the string to be printed
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
	}

	if (x != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
