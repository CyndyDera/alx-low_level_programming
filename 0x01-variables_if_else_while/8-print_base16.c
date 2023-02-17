#include <stdio.h>
/**
 * main - A program that prints all numbers in base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	putchar(numbers);
	for (numbers = 'a'; numbers <= 'f'; numbers++)
	putchar(numbers);

	putchar('\n');
	return (0);
}
