#include "main.h"

/**
 * set_bit -  It sets the value of a bit to 1 at a given index.
 * @n: the number to ste to index
 * @index: It is the index of the bit, starting from 0
 *
 * Return: 1 if it works
 * Otherwise if error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int put;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	put = 1 << index;
	*n = *n | put;
	return (1);
}
