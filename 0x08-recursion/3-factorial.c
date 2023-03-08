#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number
 * @n: int
 * Return: int
 */

int factorial(int n)
{
	int h;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		h = n * factorial(n - 1);
	}
	return (h);

}
