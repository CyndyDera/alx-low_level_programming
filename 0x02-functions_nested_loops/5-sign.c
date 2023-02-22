#include "main.h"
/**
 * print_sign - Program that prints the sign of a number
 * @n: The int to check
 * Return: 1 printand print + if n greater than zero
 * 0 and print 0 if
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
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
