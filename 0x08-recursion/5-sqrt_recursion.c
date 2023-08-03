#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: -1 If n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - Recursive helper function for _sqrt_recursion.
 * @n: The number to find the square root of.
 * @start: The lowest possible square root of n.
 * @end: The highest possible square root of n.
 *
 * Return: The square root of n, -1 if n does not have a natural square root.
 */

int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	if (mid * mid < n)
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (mid);
		}
		else
		{

			return (sqrt_helper(n, mid + 1, end));
		}
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}
