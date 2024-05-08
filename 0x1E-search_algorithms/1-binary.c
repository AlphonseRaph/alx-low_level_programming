#include "search_algos.h"
/**
 * binary_search - searches for value
 *
 * @array: sorted array
 * @size: size of array
 * @value: value to be found
 *
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high = array[size - 1], low = 0, x;
	int mid;

	if (!array)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (x = low; x <= high; x++)
		{
			printf("%d", array[x]);
			if (x < high)
			{
				printf("%c ", ',');
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
