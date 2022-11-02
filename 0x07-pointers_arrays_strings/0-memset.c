#include "main.h"
/*
 * _memset - fill a block of memory with a specific value
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the emory area with
 * @n: The number of bytes to be filled
 *
 * Return : A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
