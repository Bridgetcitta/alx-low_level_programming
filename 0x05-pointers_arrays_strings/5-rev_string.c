#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: string parameter input
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, j;

	char temp;

	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
