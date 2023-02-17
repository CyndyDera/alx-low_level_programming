#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
			putchar(alphabets));
			putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
