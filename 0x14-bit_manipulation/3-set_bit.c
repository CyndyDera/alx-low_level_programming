#include "main.h"

/**
 * set_bit - It sets the valule of a bit to 1 at a given index
 * @n: pointer to the number in terms of bit
 * @index: It is the index of the given bit, starting from 0
 *
 * Return: If it works 1
 * If it fails, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
