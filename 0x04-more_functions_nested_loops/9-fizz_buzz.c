#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1 to 100
 * but display Fizz for multiples of 3,
 * Buzz for multiples of 5, FizzBuzz for
 * multiples of 5 and 3
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
