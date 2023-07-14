#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - It converts binary to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: res
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
