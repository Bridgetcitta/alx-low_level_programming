#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @n: bytes from src
 * @src: source string
 * @dest: destination string
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	i = 0;

	while (dest[i])
		i++;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[i + a] = src[a];
	dest[i + a] = '\0';

	return (dest);

}
