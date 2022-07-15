/**
* rot13 - encode a string using rot13
* @string_var: is pointer of character
*
* Return: character
*/
char *rot13(char *string_var)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoder[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	int j;

	for (i = 0; *(string_var + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(string_var + i) == letters[j])
			{
				*(string_var + i) = encoder[j];
				break;
			}
		}
	}

	return (string_var);
}
