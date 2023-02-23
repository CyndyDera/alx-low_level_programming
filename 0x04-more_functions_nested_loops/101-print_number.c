#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		_putchar(45);
		y = -y;
	}
	if (y / 10)
	{
		print_number(y / 10);
	}
	_putchar(y % 10 + '0');
}
