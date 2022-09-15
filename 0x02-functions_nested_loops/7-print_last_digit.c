#include "main.h"

/**
 * print_last_digit - Print last digit
 *
 * @c - To be checked
 *
 * Return: Always 0.
 */

int print_last_digit(int c);
{
	int LD;

	LD = c % 10;
	if (LD < 0)
	{
		LD = LD * -1;
	}
	_putchar(num + '0');
	return (LD);
}
