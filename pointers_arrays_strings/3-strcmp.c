#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int firstStrLength = 0, secondStrLength = 0, i = 0, r = 0, limit;

	while (s1[firstStrLength])
	{
		firstStrLength++;
	}

	while (s2[secondStrLength])
	{
		secondStrLength++;
	}

	if (firstStrLength <= secondStrLength)
	{
		limit = firstStrLength;
	}
	else
	{
		limit = secondStrLength;
	}

	while (i <= limit)
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
		{
			r = s1[i] - s2[i];
			break;
		}

		i++;
	}

	return (r);
}