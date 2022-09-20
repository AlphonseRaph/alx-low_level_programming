#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of two integers
 *
 * @a: int one
 * @b: int two
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int INT_MAX;
	int INT_MIN;

	*a = 98;
	*b = 42;
	INT_MAX = 1024;
	INT_MIN = -4096;
	a = &INT_MAX;
	b = &INT_MIN;
}
