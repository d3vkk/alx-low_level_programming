#include <stdio.h>

/**
 * main -  print the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 if without error
 *
 */
int main(void)
{
int sum = 0;
int sum_for_3 = 0;
int sum_for_5 = 0;
int i;

for (i = 0; i < 1024; ++i)
{
if ((i % 3) == 0)
{
sum_for_3 = sum_for_3 + i;
}
else if ((i % 5) == 0)
{
sum_for_5 = sum_for_5 + i;
}
}
sum = sum_for_3 + sum_for_5;
printf("%d\n", sum);
return (0);
}
