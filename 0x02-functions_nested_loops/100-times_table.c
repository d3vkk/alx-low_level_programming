#include "main.h"

/**
 * print_times_table - print times table of n
 * @n: is integer
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
int row;
int col;
int multiple;
if (n >= 0 && n < 15)
{
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
multiple = row * col;
if (col == 0)
_putchar('0');
else if (multiple < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(multiple % 10 + '0');
}
else if (multiple >= 10 && multiple < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((multiple / 10) % 10 + '0');
_putchar(multiple % 10 + '0');
}
else if (multiple > 99 && multiple < 1000)
{
_putchar(',');
_putchar(' ');
_putchar(multiple / 100 + '0');
_putchar((multiple / 10) % 10 + '0');
_putchar(multiple % 10 + '0');
}
}
_putchar('\n');
}
}
}
