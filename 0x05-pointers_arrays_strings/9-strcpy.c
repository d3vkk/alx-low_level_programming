#include <stdio.h>

/**
* *_strcpy - xopy a string using a pointer
* @dest: is pointer of character
* @src: is pointer of character
*
* Return: character
*
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
