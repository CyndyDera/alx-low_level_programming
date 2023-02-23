#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: number of times
 */

void print_diagonal(int n)
{
	int m, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (m = 0; m < n; m++)
	{
		for (d = 0; d < m; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
