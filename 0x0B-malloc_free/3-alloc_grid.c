#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **w;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	w = malloc(sizeof(int *) * height);
	if (w == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		w[i] = malloc(sizeof(int) * width);
		if (w[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(w[i]);
			free(w);
			}
			return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			w[i][j] = 0;
		}
	}
	return (w);
}
