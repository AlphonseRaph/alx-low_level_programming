#include "main.h"
#include <stdio.h>

/**
 * factorial - eturns the factorial
 *
 * @n: number
 * Return 0 Always
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return 1;
	}
	return factorial * factorial(n-1);
}
