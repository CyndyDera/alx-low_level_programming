#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:first occurrence
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
