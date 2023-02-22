#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int dig = n % 10;

	if (dig < 0)
	{
		dig *= -1;
	}
	_putchar(dig + '0');
	return (dig);
}
