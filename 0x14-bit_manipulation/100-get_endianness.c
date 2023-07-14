#include "main.h"

/**
 * get_endianness - It checks whether a machine is a big or small endian
 *
 * Return: If it is an edian 1
 * Otherwise -1
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian = (char *)&check;

	if (*endian)
		return (1);
	return (0);
}
