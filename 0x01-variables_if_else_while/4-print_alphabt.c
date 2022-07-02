#include <stdio.h>
/**
 * main - prints all alphabelts in lowercase
 * except letters e and q followed by a new line
 * Return: 0 if executed, non-zero if otherwise
 */

int main(void)
{
	char ch = 'a';


	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar(ch);
	return (0);
}
