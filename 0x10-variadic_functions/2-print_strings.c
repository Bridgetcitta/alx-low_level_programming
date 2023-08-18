#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings passed
 * @separator: string to be printed between the strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int str;

	va_start(args, n);

	for (i = 0; i < n; i++)
		str = va_arg(args, int);
	printf("%d", str);

	if (i != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	if ((i == n - 1) || (separator == NULL))
	{
		printf("%s", "(nil)");
	}

	va_end(args);

	printf("\n");
}
