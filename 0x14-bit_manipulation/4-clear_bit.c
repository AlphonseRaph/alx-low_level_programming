#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set bit to 0
 *
 * @n: long int
 * @index: index of bit
 *
 * Return: 1 0r -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	i = i << index;
	i = ~i;
	*n = *n & i;
	if (*n)
	{
		return (1);
	}
	else
		return (-1);
}

