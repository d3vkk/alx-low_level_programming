#include <stdio.h>

/**
* puts2 - print every other character in a string
* @str: is pointer of character
*
* Return: void
*
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
