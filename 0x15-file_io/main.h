#ifndef MAIN_H
#define MAIN_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#if defined(__LP64__)
#define ELfW(type) El64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif
