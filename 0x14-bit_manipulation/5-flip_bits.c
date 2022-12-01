#include "main.h"

/**
 * flip_bits - counts the number of bit needed
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the necessary number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
