#include "main.h"

/**
 * print_most_numbers - Function that prints 0-9 omitting 2 and 4
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	char m;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
	_putchar('\n');
}
