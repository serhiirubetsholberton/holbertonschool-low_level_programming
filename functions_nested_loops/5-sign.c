#include "main.h"

/**
 * print_sign - Returns 1 if n > 0, -1 if n < 0 and 0 if = 0.
 * @n: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
