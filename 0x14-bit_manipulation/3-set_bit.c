#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit to 1
 *
 * @n: long int
 * @index: index of bit
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;
	unsigned int x = 0;

	for (; x < index; x++)
	{
		i = i << 1;
	}
	*n = *n | i;
	return (*n);
}
