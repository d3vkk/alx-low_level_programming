/**
* cap_string - capitalize letters of a string
* @string_var: is pointer of character
*
* Return: character
*/
char *cap_string(char *string_var)
{
	int i = 0;
	int letters[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int j;

	if (*(string_var + i) >= 97 && *(string_var + i) <= 122)
	{
		*(string_var + i) = *(string_var + i) - 32;
	}
	i++;
	while (*(string_var + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(string_var + i) == letters[j])
			{
				if ((*(string_var + (i + 1)) >= 97) && (*(string_var + (i + 1)) <= 122))
				{
					*(string_var + (i + 1)) = *(string_var + (i + 1)) - 32;
				}
				break;
			}
		}
		i++;
	}
	return (string_var);
}
