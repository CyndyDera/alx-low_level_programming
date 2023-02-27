#include "main.h"

/**
 * swap_int - Function that swaps the value of two int
 * @a: First integer to swap
 * @b: Second integer to swap
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
