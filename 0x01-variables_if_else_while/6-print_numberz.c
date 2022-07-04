#include <stdio.h>

/**
 * main - prints all base 10 digits with putchar
 *
 * Return: 0 if without error
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
