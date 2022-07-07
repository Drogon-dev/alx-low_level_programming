#include "main.h"

/**
 * isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 1 if upper, 0 if otherwise
 */

int isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
