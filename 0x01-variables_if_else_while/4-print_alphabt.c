#include <stdio.h>
/**
 * main - prints all alphabelts in lowercase
 * except letters e and q followed by a new line
 * Return: 0 if executed, non-zero if otherwise
 */

int main(void)
{
	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	}
	putchar(ch);
	return (0);
}
