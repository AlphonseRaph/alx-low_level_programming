#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum index of aray
 * @max: maximum index of array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, z;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	z = (max - min) + 1;
	p = malloc(z * sizeof(int));

	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}
