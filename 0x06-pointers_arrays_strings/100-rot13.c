#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 * Return: to s
 */

char *rot13(char *s)
{
	int i;
	int c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; c < 52; c++)
		{
			if (s[i] == data1[c])
			{
				s[i] = datarot[c];
				break;
			}
		}
	}
	return (s);
}
