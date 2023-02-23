#include "main.h"

/**
 * more_numbers - Function that prints 10 times the number
 * 0 to 14
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int f, s;

	for (f = 1; f <= 10; f++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s >= 10)
			_putchar('1');
			_putchar(s % 10 + '0');
		}
		_putchar('\n');
	}
}
