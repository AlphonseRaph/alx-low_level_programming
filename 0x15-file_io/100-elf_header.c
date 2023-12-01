#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int main(void)
{
	ElfW(Ehdr) header;
	const char* elfFILE = "100-elf_header.c"; 
	int file = open(elfFILE, O_RDONLY);
	char *buffer = malloc(sizeof(header));
	ssize_t bytesRead;
	ssize_t i = 0;

	if (buffer == NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		return (EXIT_FAILURE);
	}
	if (file == -1)
	{
		fprintf(stderr, "Error opening file");
		return (EXIT_FAILURE);
	}
	else
	{
		lseek(file, 0, SEEK_SET);
		bytesRead = read(file, &header, sizeof(header));
		if (bytesRead == -1)
		{
			fprintf(stderr, "Error reading file");
			return (EXIT_FAILURE);
		}
		if (bytesRead == sizeof(header))
		{
			if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
			{
				fprintf(stderr, "Not a valid ELF file");
				return (EXIT_FAILURE);
			}
		}
		else
		{
			buffer[bytesRead] = '\0';
			while (i < bytesRead)
			{
				printf("%c", buffer[i]);
				i++;
			}
		}
	}
	if (close(file) == -1)
	{
		fprintf(stderr, "Error closing file");
	}
	return (EXIT_SUCCESS);
}
