#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: 0 if without error
 *
 */
int main(void)
{
int i;
long int a = 1;
long int b = 2;
long int c;

for (i = 1; i <= 50; ++i)
{
if (a != 20365011074)
{
printf("%ld, ", a);
}
else
{
printf("%ld\n", a);
}
c = a + b;
a = b;
b = c;
}

return (0);
}
