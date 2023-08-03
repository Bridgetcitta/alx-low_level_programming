#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: integer
 * Return: -1 if If n is lower than 0, 1 if n = 0
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}

	return (i);
}
