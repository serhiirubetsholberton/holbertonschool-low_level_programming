#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastNumber = n % 10;

	if (lastNumber > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastNumber);
	else if (lastNumber == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastNumber);
	else if (lastNumber < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastNumber);

	return (0);
}
