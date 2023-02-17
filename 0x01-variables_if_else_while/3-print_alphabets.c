#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;
	char CAPS;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (CAPS = 'A'; CAPS <= 'Z'; CAPS++)
		putchar(CAPS);
	putchar('\n');
	return (0);
}
