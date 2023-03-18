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
	int mul;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');
			mul = a * b;
			if (mul <= 9)
				_putchar(' ');
			else
				_putchar(mul / 10 + '0');
			_putchar(mul % 10 + '0');
		}
	_putchar('\n');
	}
}
