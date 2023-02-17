#include <stdio.h>
/**
 * main - A program that prints lowercase alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)

{
char abc = 'z';
for (; abc >= 'a'; abc--)
{
putchar(abc);
}
putchar('\n');
return (0);
}
