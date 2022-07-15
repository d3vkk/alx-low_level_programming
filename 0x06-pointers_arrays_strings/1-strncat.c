/**
* _strncat - concatenate two strings and limit size
* @dest: is pointer of character
* @src: is pointer of character
* @n: is integer
*
* Return: character
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{}

	for (j = 0; j < n; j++)
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
