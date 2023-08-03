#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer 1
 * @y: integer 2
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}

	i = _pow_recursion(x, y);
	return (i);
}
