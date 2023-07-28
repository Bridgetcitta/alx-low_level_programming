#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: parameter input
 * Return: Always 0
 */

char *leet(char *s)
{
	int i, a = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};


	while (s[a] != '\0')
	{

		for (i = 0; i < 5; i++)
		{
			if (s[a] == sl[i] || s[a] == ul[i])
			{
				s[a] = n[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
