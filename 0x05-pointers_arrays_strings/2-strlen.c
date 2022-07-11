/**
* _strlen - get string length without strlen()
* @s: is pointer of character
*
* Return: integer
*
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
