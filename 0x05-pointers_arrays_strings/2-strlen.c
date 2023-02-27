#include "main.h"

/**
 * _strlen - Fnction that returns the length of a string
 * @s: string to check
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
		length++;
	return (length);
}
