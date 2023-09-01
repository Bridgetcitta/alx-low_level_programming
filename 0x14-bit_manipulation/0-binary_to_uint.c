#include "main.h"

/**
 * binary_to_uint - converts a binary num to an unsigned int.
 * @b: string input
 * Return: the convted num, or 0 if there is one or
 * more chars in b that is not 0 or 1, b = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			convert = convert * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (convert);
}
