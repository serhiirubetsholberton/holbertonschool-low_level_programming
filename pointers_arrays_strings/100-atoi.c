#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i;
	int res = 0;

	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return (res);
}
