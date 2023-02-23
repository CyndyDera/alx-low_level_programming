#include "main.h"

/**
 * print_line - Function that draws a straight line
 * @n: number of times
 */

void print_line(int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
