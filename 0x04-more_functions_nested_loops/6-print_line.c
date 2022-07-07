#include "main.h"

/**
 * print_line - prints  n times _
 * @n: integer n
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_' * n);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

