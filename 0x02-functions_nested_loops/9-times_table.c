#include "main.h"

/**
 * times_table - calculstes the multiplication of n starting
 * from 0 to 9
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i*j);
			_putchar(',  ');
		}
		_putchar('\n');
	}
}
