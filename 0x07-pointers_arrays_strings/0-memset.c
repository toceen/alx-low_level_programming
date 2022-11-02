#include "main.h"
/*
 * _memset - fills the first n bytes of the memeory area
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the emory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * return : Apointer to the filled memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}