#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0 if without error
 *
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 2;
unsigned long int a_1;
unsigned long int a_2;
unsigned long int b_1;
unsigned long int b_2;
int i;

printf("%lu", a);
for (i = 1; i < 91; i++)
{
printf(", %lu", b);
b = b + a;
a = b - a;
}
a_1 = a / 1000000000;
a_2 = a % 1000000000;
b_1 = b / 1000000000;
b_2 = b % 1000000000;
for (i = 92; i < 99; ++i)
{
printf(", %lu", b_1 + (b_2 / 1000000000));
printf("%lu", b_2 % 1000000000);
b_1 = b_1 + a_1;
a_1 = b_1 - a_1;
b_2 = b_2 + a_2;
a_2 = b_2 - a_2;
}
printf("\n");

return (0);
}
