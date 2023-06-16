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
	int i, z, y;
	int *p;

	k = min;
	if (min > max)
	{
		return (NULL);
	}

	z = (max - min) + 1;
	p = malloc(z * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		p[i] = y;
		y++;
	}
	return (p);
}
