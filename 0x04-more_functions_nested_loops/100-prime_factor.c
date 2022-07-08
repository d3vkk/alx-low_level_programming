#include <stdio.h>

/**
 * main - Compute largest prime factor of a number
 *
 * Return: 0 if without error
 */
int main(void)
{
unsigned long int i;
unsigned long int n = 612852475143;

for (i = 3; i < 12057; i += 2)
{
while (n % i == 0 && n != i)
{
n /= i;
}
}
printf("%lu\n", n);

return (0);
}
