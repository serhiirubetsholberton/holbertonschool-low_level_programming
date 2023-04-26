#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charCode;

	for (charCode = 48; charCode < 58; charCode++)
	{
		putchar(charCode);
	}

	putchar('\n');

	return (0);
}
