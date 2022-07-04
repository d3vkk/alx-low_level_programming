#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 if without error
 */
int main(void)
{
char character;

for (character = 'z'; character >= 'a'; character--)
{
putchar(character);
}
putchar('\n');

return (0);
}
