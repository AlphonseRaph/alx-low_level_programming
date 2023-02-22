#include "main.h"

/**
 * times_table - Print times table
 *
 * Return: no return value
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(a * b + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
}
