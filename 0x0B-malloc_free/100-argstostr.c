#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: program 1
 * @av: program 2
 * Return: NULL if ac == 0 or av == NULL,
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}

		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len] = av[i][j];
			len++;
		}

		str[len] = '\n';
		len++;
	}

	str[len] = '\0';

	return (str);
}
