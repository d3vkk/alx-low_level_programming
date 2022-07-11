#include <stdio.h>

/**
* _puts - print a string
* @str: is pointer of character
*
* Return: void
*
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
