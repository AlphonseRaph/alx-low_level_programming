#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - find squareroot
 *
 * @n: number
 * @root: used to calculate root
 *
 * Return: squareroot
 */

int find_sqrt(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: number
 *
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	int root = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}

