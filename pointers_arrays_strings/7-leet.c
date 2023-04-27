#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int leftPointer = 0, rightPointer = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[leftPointer])
	{
		rightPointer = 0;

		while (rightPointer < l)
		{
			if (s[leftPointer] == r[rightPointer] || s[leftPointer] - 32 == r[rightPointer])
			{
				s[leftPointer] = n[rightPointer];
			}

			rightPointer++;
		}

		leftPointer++;
	}

	return (s);
}
