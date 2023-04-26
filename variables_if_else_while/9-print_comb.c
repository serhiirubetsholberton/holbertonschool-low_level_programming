#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int code;

	for (code = 48; code < 58; code++)
	{
		putchar(code);
		if (code != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
