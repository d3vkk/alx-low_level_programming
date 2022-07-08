#include "main.h"

/**
 * print_line - Draw a straight line
 * @n: is integer
 *
 * Return: 0 if without error
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
