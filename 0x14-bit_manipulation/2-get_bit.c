#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns value of bit
 *
 * @n: ling int
 * @index: index of bit
 *
 * Return: value of bit 0r -1
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;
	unsigned  int x = 0;

	for (; x < index; x++)
	{
		i = i << 1;
	}
	if (n & i)
	{
		return (1);
	}
	else
		return (0);
}
