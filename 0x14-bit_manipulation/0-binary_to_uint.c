#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts  bin no to  int
 *
 * @b: pointer to string
 *
 * Return: 0 always
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '1' || *b == '0')
		{
			result = (result << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
