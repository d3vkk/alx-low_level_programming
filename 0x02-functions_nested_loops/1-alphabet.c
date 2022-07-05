#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: 0 if without error
 */
void print_alphabet(void)
{
char character = 'a';

for (character = 'a'; character <= 'z'; character++)
{
_putchar(character);
}
_putchar('\n');
}
