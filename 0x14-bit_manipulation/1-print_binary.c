#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer input
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int rep;

	int print = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	rep = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (rep > 0)
	{
		if (n & rep)
		{
			print = 0;
			printf("1");
		}

		else if (!print)
		{
			printf("0");
		}
		rep >>= 1;
	}
}
