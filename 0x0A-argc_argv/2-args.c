#include "main.h"
#include <stdio.h>

/**
 * main - Entrypoint
 *
 * @argc: counts no of arguments
 * @argv: pointer to array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
