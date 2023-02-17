#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	printf("%d", numbers);
	putchar('\n');
	return (0);
}
