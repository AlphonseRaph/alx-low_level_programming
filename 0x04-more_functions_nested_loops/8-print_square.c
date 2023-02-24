#include "main.h"

/**
 * Print_square - print square
 *
 * @size: n
 *
 * Return: no return
 */

void print_square(int size)
{
	int i, z;

	for (i = 0; i < size; i++)
	{
		for (z = 0; z < size; z++)
		{
			putchar('#');
		}
	putchar('\n');
	}
}
