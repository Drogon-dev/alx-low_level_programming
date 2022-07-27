#include <unistd.h>

/**
 * _putchar - writes the character c ot stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returne, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


