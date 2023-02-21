#include "main.h"
/**
 * print_sign - Program that prints the sign of a number
 * @n: The int to check
 * Return: 1 print + if n > 0, 0 prnt 0, 1 print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return
}
