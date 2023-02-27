#include "main.h"

/**
 * puts2 - Function that prints every other char of string
 * starting with the first char
 * followed by a new line
 * @str: char
 * Return: 0 (Success)
 */

void puts2(char *str)
{
	int feb;

	for (feb = 0; str[feb] != '\0'; feb++)
	if (feb % 2 == 0)
		_putchar(str[feb]);
	_putchar('\n');
}
