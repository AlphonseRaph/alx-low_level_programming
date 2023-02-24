#include "main.h"

/**
 * print_square - print square
 *
 * @size: n
 *
 * Return: no return
 */

void print_square(int size)
{
	int i, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
