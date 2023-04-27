#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int left = 0, right = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[left])
	{
		right = 0;

		while (right < l)
		{
			if (
				s[left] == r[right] || s[left] - 32 == r[right])
			{
				s[left] = n[right];
			}

			right++;
		}

		left++;
	}

	return (s);
}
