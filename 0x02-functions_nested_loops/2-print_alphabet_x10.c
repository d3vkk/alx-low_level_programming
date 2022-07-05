#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: 0 if without error
 */
void print_alphabet_x10(void)
{
int n;
char character = 'a';

for (n = 0; n < 10; n++)
{
for (character = 'a'; character <= 'z'; character++)
{
_putchar(character);
}
_putchar('\n');
}
}
