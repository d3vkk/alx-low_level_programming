#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 *
 * Return: 0 if without error
 */
int main(void)
{
char character;

for (character = 'a'; character <= 'z'; character++)
{
putchar(character);
}
putchar('\n');

return (0);
}
