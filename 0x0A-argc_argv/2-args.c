#include <stdio.h>

/**
 * main - main function
 *
 * @argc: no of arguments
 * @argv: pointer to arguments
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
