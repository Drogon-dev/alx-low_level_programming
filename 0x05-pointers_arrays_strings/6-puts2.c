#include "main.h"

/**
 * puts2 - prints every other character
 * followed by a new line
 * @str: pointer
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
