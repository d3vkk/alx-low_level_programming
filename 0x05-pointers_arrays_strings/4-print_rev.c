#include <stdio.h>

/**
* print_rev - reverse a string
* @s: is pointer of character
*
* Return: void
*
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}
