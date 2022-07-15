/**
* _strcat - concatenate two strings
* @dest: is pointer of character
* @src: is pointer of character
*
* Return: character
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{}

	for (j = 0; j >= 0; j++)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
