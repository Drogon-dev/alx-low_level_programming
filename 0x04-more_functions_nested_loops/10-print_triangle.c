#include "main.h"

/**
 * print_triangle - prints a traingle with the # sign
 * @size: lenght of traingle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j > i)
				{
					_putchar(' ');
				}
				else if (j <= i)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
