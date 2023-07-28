#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @s: parameter input
 * Return: Always 0
 */

char *cap_string(char *s)
{
	int i = 0;

	int capitalize_next = 1;

	while (s[i] != '\0')
	{
		if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= ('a' - 'A');

	}
		capitalize_next = 0;
		switch (s[i])
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
			capitalize_next = 1;
			break;
		default:
			break;
	}
	i++;

	}

	return (s);
