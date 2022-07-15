/**
* _strcmp - compare length of two strings
* @s1: is pointer of character
* @s2: is pointer of character
*
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int difference = 0;

	for (i = 0; difference == 0; i++)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		difference = *(s1 + i) - *(s2 + i);
	}

	return (difference);
}
