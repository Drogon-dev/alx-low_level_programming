#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - returns the last digit of a randomly
 * generated number
 * Return: 0 if executed properly, non-zero if otherwise
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n[-1];
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n"), n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"), n, l);
	return (0);
}
