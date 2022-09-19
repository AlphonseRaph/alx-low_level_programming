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

	*a = 10;
	*b = 20;
	*a = &b;
}
