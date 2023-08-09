#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: size of the memory
 * @c: character to print
 * Return: null if size = 0, Returns a pointer to the array,
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;

	if (i == size)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
