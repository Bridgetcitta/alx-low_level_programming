#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: number of bytes to copy
 * @src: char source
 * @dest: char destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
