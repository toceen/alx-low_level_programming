#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if a file is an ELF file
 * @e_ident: a pointer to an array containing the ELF magic numbers
 *
 * description: if the file is not an ELF file - exit code 98
 */
void check_elf(unsigned char *e_ident)
{
	int index;
