#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *print = format;
	char c, *s;
	int i;
	double d;

	va_start(args, format);
	while (*print)
	{
		if (*print == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		} else if (*print == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		} else if (*print == 'f')
		{
			d = va_arg(args, double);
			printf("%f", d);
		} else if (*print == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil");
			else
			{
				printf("%s", s);
			}
		}
		print++;
	}
	va_end(args);
	printf("\n");
}
