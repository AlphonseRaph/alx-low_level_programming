#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 *
 * @x: Value
 * @y: power
 * Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	while (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
return (0);
}