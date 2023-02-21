#include "main.h"
/**
 * _isalpha - Function program that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 if char is letter lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
