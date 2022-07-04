#include <stdio.h>

/**
 * main - prints the lowercase alphabet except q and e
 *
 * Return: 0 if without error
 */
int main(void)
{
char character;

for (character = 'a'; character <= 'z'; character++)
{
if (character != 'q' && character != 'e')
{
putchar(character);
}
}
putchar('\n');

return (0);
}
