#include "main.h"

/**
 * get_bit - It returns the value of a bit at a given index
 * @n: It is the number to be checked in terms of bit
 * @index: the index of the bit you want to get
 *
 * Return: the value of the bit at index
 * If an error occurs, return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
