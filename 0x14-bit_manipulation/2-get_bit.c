#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: string input
 * @index: is the index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	num = 1UL << index;

	if (n & num)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
