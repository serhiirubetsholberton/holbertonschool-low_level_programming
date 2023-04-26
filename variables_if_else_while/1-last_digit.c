#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastNumber = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastNumber > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastNumber);
	}
	if (lastNumber == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastNumber);
	}
	if (lastNumber < 6)
	{
		char text[] = "Last digit of %i is %i and is less than 6 and not 0\n";

		printf(text, n, lastNumber);
	}

	return (0);
}
