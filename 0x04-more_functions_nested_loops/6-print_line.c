#include <stdio.h>

/**
 * Entry point - print_line
 *
 * Return void
 */

void print_line(int n);
{
	int i;
	for(i = 48; i <= n; i++)
	{
		if (n <= 48)
			{
				_putchar('\n');
			}
		else
			{
				_putchar('_');
			}
	}
	_putchar('\n');
}
