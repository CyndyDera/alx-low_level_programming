#include "main.h"

/**
 * get_endianness - It checks the endianness
 *
 * Return: If returns 0 for big endian,
 * If little endian 1
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian = (char *)&check;

	if (*endian)
		return (1);
	return (0);
}
