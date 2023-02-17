#include <stdio.h>
/**
 * main - A program that prints all numbers in base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers;

	for (number = '0'; number <= '9'; number++)
	putchar(number);
	for (numbers = '0'; numbers <= '9'; numbers++)
	putchar(numbers);
	for (number = 'a'; number <= 'f'; number++)
	putchar(number);
	for (numbers = 'a'; numbers <= 'f'; numbers++)
	putchar(numbers);

	putchar('\n');
	return (0);
}
