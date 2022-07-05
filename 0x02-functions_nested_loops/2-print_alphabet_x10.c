#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabelt 10
 * times followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}

}
