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
	int *INT_MAX;
	int *INT_MIN;

	*INT_MAX = 1024;
	*a = 98;
	*b = 42;
	*INT_MAX = -4096;
	*INT_MAX = &a;
	*INT_MIN = &b;
}
