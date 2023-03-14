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
	int *w, *h, i, j;
	int arr[i][j];
	
	if (height <= 0 || width <= 0);
	{
		return (NULL);
	}
	h = malloc(sizeof(*h) * height);
	w = malloc(sizeof(*w) * width);
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
		{
			arr[i][j] = 0;
		}
	}
}
