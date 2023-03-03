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
	int i;
	int y;
	char Alphonse;

	y = 0;
	i = n - 1;
	while (*(a + y) != '\0')
	{
		i--;
		Alphonse = a[i];
	 	a[y] = a[i];
		a[i] = Alphonse;
		y++;
	}
}
	
