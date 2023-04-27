#include "holberton.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int length = 0, i;

	while (s[length])
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		if (c == s[i])
		{
			return (s);
		}
	}

	return ('\0');
}
