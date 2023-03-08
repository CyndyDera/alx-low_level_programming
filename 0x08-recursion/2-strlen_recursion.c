#include "main.h"

/**
 * _strlen_recursion - function that returns the
 * length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s)
	{
		z++;
		z += _strlen_recursion(s + 1);

	}
	return (z);
}
