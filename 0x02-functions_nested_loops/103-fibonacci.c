#include <stdio.h>

/**
 * main - print sum of the even-valued terms
 *
 * Return: 0 if without error
 *
 */
int main(void)
{
int a = 1;
int b = 2;
int c;
int sum = 0;
int i;

for (i = 1; i <= 33; ++i)
{
if (a < 4000000 && (a % 2) == 0)
{
sum = sum + a;
}
c = a + b;
a = b;
b = c;
}
printf("%d\n", sum);

return (0);
}
