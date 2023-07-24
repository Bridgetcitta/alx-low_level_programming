#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter input
 * Return: Always to length
 */

int _strlen(char *s)
{
	int length = 0;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}
