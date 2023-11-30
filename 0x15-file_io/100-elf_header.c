#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
int main(const char *elfFILE)
{
	ElfW(Ehdr) header;
	int file = open(elfFile, O_RDONLY);
	char buffer = malloc(sizeof(header));
	ssize_t bytesRead;
	ssize_t i = 0;

	if (buffer == NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		return (0);
	}
	if (file == -1)
	{
		fprintf(stderr, "Error opening file '%s': ", filename);
		return (0);
	}
	else
	{
		lseek(file, 0, SEEK_SET);
		bytesRead = read(file, &header, sizeof(header));
		if (bytesRead == -1)
		{
			fprintf(stderr, "Error reading file");
			return (0);
		}
		if (bytesRead == sizeof(header))
		{
			if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
			{
				frprintf(stderr, "Not a valid ELF file");
				return (0);
			}
		}
		else
		{
			buffer[bytesRead] = '\0';
			while (i < bytesRead)
			{
				printf("%s", buffer[i]);
				i++;
			}
		}
	}
	if (close(file) == -1)
	{
		fprintf(stderr, "Error closing file");
	}
	return (0);
}
