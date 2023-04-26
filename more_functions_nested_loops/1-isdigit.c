#include "main.h"

/**
 * _isdigit - Checks is c digit or not.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
