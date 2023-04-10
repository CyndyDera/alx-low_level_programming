#include <unistd.h>

/**
 * _putchar - It writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error, -1 is returned and the error is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
