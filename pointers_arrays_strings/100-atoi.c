#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{

	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	// Return result with sign
	return sign * res;
}
