#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *s;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	s = malloc(len1 + n + 1);

	if (s == NULL)
		return (NULL);

	memcpy(s, s1, len1);
	memcpy(s + len1, s2, n);
	s[len1 + n] = '\0';

	return (s);
}
