#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - checks wether a randomly generated number is positive or negative
 * Return: 0 if executed, non-zero otherwise
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is negative\n", n);
	return (0);
}
