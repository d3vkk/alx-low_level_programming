#include <stdio.h>

/**
* rev_string - reverse a string
* @s: is pointer of character
*
* Return: void
*
*/
void rev_string(char *s)
{
	int maximum_length;
	int half_length;
	int i;
	char first_character, last_character_character;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	maximum_length = i - 1;
	half_length = maximum_length / 2;
	while (half_length >= 0)
	{
		first_character = s[maximum_length - half_length];
		last_character_character = s[half_length];
		s[half_length] = first_character;
		s[maximum_length - half_length] = last_character_character;
		half_length--;
	}
}
