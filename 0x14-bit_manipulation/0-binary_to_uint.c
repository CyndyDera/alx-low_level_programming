#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - Its converts a bianry number to an unsigned int
 * @b: pointer to the array of characters in the binary to be converted
 *
 * Return: the converted  number, or 0 if
 * there is more then one chars in the string
 * that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base = 1, len = 0;
	unsigned int res = 0;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			res += base;
		base *= 2;
	}
	return (res);
}
