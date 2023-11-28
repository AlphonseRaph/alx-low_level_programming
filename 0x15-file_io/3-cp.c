#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main( char *file_from, int argc, char *argv[])
{
	int fd = 0;
	char buffer = malloc(1024);
	ssize_t x = 0;
	int fp = 0;
	ssize_t y = 0;

	if (argc < 4)
	{
		exit(97);
		dprintf("Usage: cp file_from file_to\n");
	}
	if (file_from == NULL)
	{
		exit(98);
		dprintf("Error: Can't read from file argv[0]\n");
	}
	fd = open(file_from, O_RDONLY);
	x = read(fd, buffer, 1024);
	if (close(fd) == -1)
	{
		dprintf("Error: Can't close fd %d\n", fd);
	}
	fp = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
	y = write(fp, buffer, 1024);
	if (y == -1)
	{
		exit(99);
		dprintf("Error: Can't write to argv[1]\n");
	}
	if (close(fp) == -1)
	{
		dprintf("Error: Can't close fd %d\n", fd);
	}
	return (0);
}





