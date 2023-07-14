#include "main.h"

/**
 * flip_bits - It retur ns the number of bits needed to flip to get to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int exception = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = exception >> i;
		if (present & 1)
			count++;
	}

	return (count);
}
