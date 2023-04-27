#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *rightPointer, i, temp, k;

	rightPointer = a;

	for (i = 1; i < n; i++)
	{
		rightPointer++;
	}

	for (k = 0; k < i / 2; k++)
	{
		temp = a[k];
		a[k] = *rightPointer;
		*rightPointer = temp;
		rightPointer--;
	}
}
