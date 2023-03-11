#include "main.h"
#include <stdio.h>

/**
 * main - function
 *
 * @argc: count no of arguments
 * @argv: pointer to an array of arguments
 * Return: always 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
