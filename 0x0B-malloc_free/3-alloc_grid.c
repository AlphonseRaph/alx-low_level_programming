#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer
 *
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **p;

	if (width || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * width);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (; x >= 0; x--)
				free(p[x]);
			free(p);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			p[x][y] = 0;
		}
	}
	return (p);
}
