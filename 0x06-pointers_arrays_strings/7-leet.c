#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: parameter input
 * Return: Always 0
 */

char *leet(char *s)
{
	char *leet_chars = "AEGOTLaegotl";
	char *leet_nums = "43671";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (s[i] == leet_chars[j])
			{
				s[i] = leet_nums[j / 2];
				break;
			}
		}
		i++;
	}
	return (s);
}
