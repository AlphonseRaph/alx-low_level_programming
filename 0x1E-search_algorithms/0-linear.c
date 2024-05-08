#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value
 *
 * @array: point to first element in array
 * @size: size of array
 * @value: value to be found
 *
 * Return: 1st index of located value
 *
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = %d\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = %d\n", i, array[i]);
		}
	}
	return (-1);
}
