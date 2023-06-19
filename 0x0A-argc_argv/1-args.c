#include <stdio.h>

/**
 * main - takes arguments
 *
 * @argc: no of arguments
 * @argv: pointer to string of argyuments
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc <= 0)
	{
		return -1;
	}
	printf("%d\n", argc - 1);
	return 0;
}
