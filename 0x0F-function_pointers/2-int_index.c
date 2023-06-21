#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: function to compare values
 *
 * Return: 0 (always)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
		return (i);
		}
	}
return (0);
}

