#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: a pointer to the bit
 * @index: the index to set the value at
 *
 * Return: if an error occurs - -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
