#include <stdio.h>

/**
 * main - prints all possible combinations of base 10 digits
 *
 * Return: 0 if without error
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
