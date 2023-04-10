#include "main.h"

/**
 * flip_bits - It returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = exclusive >> i;
		if (present & 1)
			count++;
	}

	return (count);
}
