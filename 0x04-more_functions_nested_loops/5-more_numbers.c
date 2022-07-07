#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14
 * followed by a new line ten times
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		j++;
	}
	_putchar('\n');
}
