#include <stdio.h>
/**
 * main - prints out all alphabelts in lowercase
 * and uppercase followed by a new line
 * Return: 0 if executed, non-zero if otherwise
 */
int main(void)
{
	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
