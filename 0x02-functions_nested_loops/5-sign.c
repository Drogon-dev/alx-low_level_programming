#include "main.h"

/**
 * print_sign - checks if a character is negative or positive
 * then prints the sign
 * @c : character to check
 * Return: 1 if positive, -1 if negative, 0 if zer0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+',);
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-',);
		return (-1);
	}
	else()
	{
		_putchar('0',);
		return (0);
	}
}
