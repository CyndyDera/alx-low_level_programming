#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - It setss the value of a bit to 0 at a given index
 * @n: pointer to the number in terms of bit
 * @index: the index of the bit to be set, starting from 0
 *
 * Return: If it works 1
 * If it fails -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
