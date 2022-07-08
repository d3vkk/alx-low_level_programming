#include "main.h"

/**
 * more_numbers - Muliply 0 to 14 by 10
 *
 * Return: void
 */
void more_numbers(void)
{
int character;
int i;

for (i = 0; i < 10; i++)
{
for (character = 0; character < 15; character++)
{
if (character >= 10)
_putchar((character / 10) + 48);
_putchar((character % 10) + 48);
}
_putchar('\n');
}
}
