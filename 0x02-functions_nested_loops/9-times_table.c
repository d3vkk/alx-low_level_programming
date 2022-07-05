#include "main.h"

/**
 * times_table - print 9 times tables
 *
 * Return: void
 *
 */
void times_table(void)
{
int row;
int col;
int multiple;
int tens;
int ones;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
multiple = row * col;
tens = multiple / 10;
ones = multiple % 10;

if (col == 0)
{
_putchar('0');
}
else if (multiple < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
