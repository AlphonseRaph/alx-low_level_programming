#include "main.h"

/**
 * more_numbers - 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 48; a <= 16; a++)
	{
		for (b = 48; b <= 4952; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
