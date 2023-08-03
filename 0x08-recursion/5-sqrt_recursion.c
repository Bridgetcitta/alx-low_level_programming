#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: -1 If n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n > 0)
		return (1);
	else
		return (n*_sqrt_recursion(n - 1));
}
