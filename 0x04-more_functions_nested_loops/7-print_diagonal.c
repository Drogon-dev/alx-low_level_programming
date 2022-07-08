#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer n
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putcahr('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n')
		}
	}
}
