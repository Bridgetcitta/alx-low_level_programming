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

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
