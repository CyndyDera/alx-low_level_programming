#include "main.h"

/**
 * get_bit - It returns the value of a bit at a given index.
 * @n: the number to be checked in terms of bit
 * @index: the index of the bit to be checked, starting from 0
 *
 * Return: the value of the bit at index
 * If an error occurs -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divide, confirm;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divide = 1 << index;
	confirm = n & divide;
	if (confirm == divide)
		return (1);
	return (0);
}
