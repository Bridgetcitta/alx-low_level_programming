#include "main.h"


/**
 * *_strcpy - copies a string pointed to by src,
 * including the null byte null byte (\0)
 * @src: source of string input
 * @dest: destination of string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}

	dest[b] = '\0';

	return (dest);
}
