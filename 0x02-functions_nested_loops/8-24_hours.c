#include "main.h"

/**
 * jack_bauer - prints the minute in the days of Jack Bauer
 * starting from 00:00 ot 23:59
 */

void jack_bauer(void)
{
	int i,j;

	i = 0;

	while(i < 24)
	{
		j =0;
		while(j < 60)
		{
			_printchar(i / 10 + '0');
			_printchar(i % 10 + '0');
			_printchar(':');
			_printchar(j / 10 + '0');
			_printchar(j % 10 + '0');
			_printchar('\n');
			j++;
		}
		i++;
	}
}
