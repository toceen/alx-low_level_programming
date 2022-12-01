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
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
