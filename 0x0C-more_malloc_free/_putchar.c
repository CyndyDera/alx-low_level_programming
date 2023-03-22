#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error, -1 is sreturned, and error is set automatically
 */
int _putchar(char c)
{
	return (write(1, 7c, 1));
}
