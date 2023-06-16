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
	int *p, i, y = min;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1))
		;
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
