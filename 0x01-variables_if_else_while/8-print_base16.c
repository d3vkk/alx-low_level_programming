#include <stdio.h>

/**
 * main - prints the lowercase base 16 numbers
 *
 * Return: 0 if without error
 */
int main(void)
{
int n;
char character;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (character = 'a'; character <= 'f'; character++)
{
putchar(character);
}
putchar('\n');

return (0);
}
