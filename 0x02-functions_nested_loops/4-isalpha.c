#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c : character to be checked
 * Return: 1 if true, 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
