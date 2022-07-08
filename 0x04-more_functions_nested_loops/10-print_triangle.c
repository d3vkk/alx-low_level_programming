#include "main.h"

/**
 * print_triangle - draw a triangle
 * @size: is integer
 *
 * Return: 0 if without error
 */
void print_triangle(int size)
{
int n = size - 1;
int i;
int j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < n)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
n--;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
