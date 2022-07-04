#include <stdio.h>

/**
 * main - prints the lowercase and uppercase alphabet
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
for (character = 'A'; character <= 'Z'; character++)
{
putchar(character);
}
putchar('\n');

return (0);
}
