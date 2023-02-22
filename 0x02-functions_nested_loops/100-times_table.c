#include <stdio.h>

/**
 * Entry point - print_times_table
 *
 * Return
 */

void print_times_table(int n);
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(a * b + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}

