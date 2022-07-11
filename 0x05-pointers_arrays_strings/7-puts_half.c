#include <stdio.h>

/**
* puts_half - print second half a string
* @str: is pointer of character
*
* Return: void
*
*/
void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}

	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}

	for (i++; i < count; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
