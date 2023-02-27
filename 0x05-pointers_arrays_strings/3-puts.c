#include "main.h"

/**
 * _puts - Function that prints a string,
 * followed be a new line, to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int w = 0;

	while (str[w] != '\0')
	{
		_putchar(str[w]);
		w++;
	}
	_putchar('\n');
}
