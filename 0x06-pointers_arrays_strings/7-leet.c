/**
* leet - encode a string into 1337
* @string_var: is pointer of character
*
* Return: character
*/
char *leet(char *string_var)
{
	int numbers[] = {52, 51, 48, 55, 49};
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int i;
	int j;

	for (i = 0; *(string_var + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(string_var + i) == lowercase[j] || *(string_var + i) == uppercase[j])
			{
				*(string_var + i) = numbers[j];
				break;
			}
		}
	}

	return (string_var);
}
