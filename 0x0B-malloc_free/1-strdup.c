#include "main.h"

/**
 * _strdup -  returns a pointer to a new string which
 * is a duplicate of the string
 * @str: string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;
	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		dup[b] = str[b];
	return (dup);
}
