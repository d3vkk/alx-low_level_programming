/**
* string_toupper - change lowercase letters to uppercase
* @string_var: is pointer of character
*
* Return: character
*/
char *string_toupper(char *string_var)
{
	int i;

	for (i = 0; *(string_var + i) != '\0'; i++)
	{
		if ((*(string_var + i) >= 97) && (*(string_var + i) <= 122))
		{
			*(string_var + i) = *(string_var + i) - 32;
		}
	}

	return (string_var);
}
