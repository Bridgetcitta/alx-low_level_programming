#include "main.h"

/**
 * is_prime_number - prints prime numbers
 * @n: integer
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - is a helper function
 * @n: integer input
 * @i: integer input
 * Return:1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_helper(int n, int i)
{

	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 1));
}
