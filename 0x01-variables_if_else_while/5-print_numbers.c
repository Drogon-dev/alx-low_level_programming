#include <stdio.h>

/**
 * main - prints aall single digit numbers of base
 * 10 starting from 0, folowed by a new line
 * Return: always (0) success
 */
int main(void)
{
	int n;


	for (n = 0; n < 10; n++)
		printf("%d", n++);
	printf("\n");
	return (0);
}
