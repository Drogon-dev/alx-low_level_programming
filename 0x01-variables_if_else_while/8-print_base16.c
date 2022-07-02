#include <stdio.h>
/**
 * main - prints all th numers of base 16 in lowercase,
 * followed by a new line
 * Return: o if executed, non-zero if otherwise
 */
int main(void)
{
	int n;
	char ch;


	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
