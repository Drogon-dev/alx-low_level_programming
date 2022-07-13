#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer
 */

void rev_string(char *s)
{
	int i, j;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	
	char n[i] = "";

	for (j = i - 1; j >= 0; j--)
	{
		n[j] = s[j]
