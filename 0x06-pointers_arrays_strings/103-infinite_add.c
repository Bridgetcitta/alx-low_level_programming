#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer results
 * @size_r: buffer size
 * Return: to 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j;

	if (len1 + 1 > size_r || len2 + 1 > size_r)

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[len1 + len2 - i - j - 2] = sum % 10 + '0';
	}
	r[len1 + len2 - i - j - 2] = '\0';
	for (i = 0, j = strlen(r) - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
