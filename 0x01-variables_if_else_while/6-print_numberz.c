#include <stdio.h>
/**
 * main - A program that prints single digit number of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	putchar(numbers + '0');
	putchar('\n');
	return (0);
}
