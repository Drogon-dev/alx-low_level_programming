#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers 1 to 100
 * but display Fizz for multiples of 3,
 * Buzz for multiples of 5, FizzBuzz for
 * multiples of 5 and 3
 * Return: values
 */

int fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf('\n');
	}
}
