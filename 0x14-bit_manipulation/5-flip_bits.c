#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: integer input
 * @m: parameter member
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int num;

	result = n ^ m;
	num = 0;

	while (result)
	{
		num++;
		result &= result - 1;
	}
	return (num);
}
