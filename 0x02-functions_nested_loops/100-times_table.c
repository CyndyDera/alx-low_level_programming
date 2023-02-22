include "main.h"
/**
 * print_times_table - Program that prints the times table of the input
 * @n: The value of the times table
 */
void print_times_table(int n)
{
	int num, mul, pr;

	if (n >= 0 && n <= 15)
		for (num = 0; num <= n; num++)
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
				_putchar(',');
				_putchar(' ');
				pr = num * mul;
				if (pr <= 99)
					_putchar(' ');
				if (pr <= 9)
					_putchar(' ');
				if (pr >= 100)
					_putchar((pr / 100) + '0');
					_putchar(((pr / 10)) % 10 + '0');
				else if (pr <= 99 && pr >= 10)
					_putchar((pr / 10) + '0');
				_putchar((pr % 10) + '0');
			_putchar('\n');
}
