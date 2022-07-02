#include <stdio.h>
/**
 * main - prints all alphabelts in lowercase
 * Return: 0 if executed properly, non-zero if otherwise
 */
int main(void)
{
	char ch;
	

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
