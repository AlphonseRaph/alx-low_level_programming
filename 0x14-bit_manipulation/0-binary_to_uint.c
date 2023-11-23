#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to int
 *
 * @b: points to string
 *
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;

	if (b != NULL)
	{
		while (*b)
		{
			if (*b == '1'|| *b == '0')
			{
				x = x << 1;
				x = x | (*b - '0');
				b++;
			}
			else
				return (0);
		}
		return (x);
	}
	else
		return (0);
}
