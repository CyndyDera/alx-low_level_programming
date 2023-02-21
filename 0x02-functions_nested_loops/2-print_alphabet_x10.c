#include "main.h"

/**
 * print_alphabet_x10 - A program that print 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char ten;
	int count = 0;

	while (count < 10)
	{
		ten = 'a';
		while (ten <= 'z')
		{
			_putchar(ten);
			ten++;
		}
		_putchar('\n');
		count++;
	}
}
