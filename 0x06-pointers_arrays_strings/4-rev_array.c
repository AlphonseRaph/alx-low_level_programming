#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: arrays of integers
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int Alphonse;

	i = n - 1;
	while (i >= n / 2)
	{
		Alphonse = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = Alphonse;
		i--;
	}
}
