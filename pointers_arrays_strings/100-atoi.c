#include <stdio.h>

// A simple atoi() function
int _atoi(char *s)
{
	// Initialize result
	int res = 0;

	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return res;
}
