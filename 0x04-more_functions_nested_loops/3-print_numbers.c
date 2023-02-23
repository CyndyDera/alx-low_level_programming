#include "main.h"
/**
 * print_numbers - A function that prints numbers 0-9
 * with new line
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
