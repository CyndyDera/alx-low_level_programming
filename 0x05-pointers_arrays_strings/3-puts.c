#include "main.h"

/**
 * _puts - Function that prints a string,
 * followed be a new line, to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int qw = 0;

	while (str[qw] != '\0')
	{
		_putchar(str[qw]);
		qw++;
	}
	_putchar('\n');
}
