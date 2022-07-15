/**
* infinite_add - add two very large numbers
* @n1: is pointer of character
* @n2: is pointer of character
* @r: is pointer of character
* @size_r: is integer
*
* Return: character
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int j1, j2, k, l, i1 = 0, i2 = 0, sum = 0;

	while (*(n1 + i1) != '\0')
		i1++;
	while (*(n2 + i2) != '\0')
		i2++;
	if (i1 >= i2)
		l = i1;
	else
		l = i2;
	if (size_r <= l + 1)
		return (0);
	r[l + 1] = '\0';
	i1--, i2--, size_r--;
	j1 = *(n1 + i1) - 48, j2 = *(n2 + i2) - 48;
	while (l >= 0)
	{
		k = j1 + j2 + sum;
		if (k >= 10)
			sum = k / 10;
		else
			sum = 0;
		if (k > 0)
		*(r + l) = (k % 10) + 48;
		else
			*(r + l) = '0';
		if (i1 > 0)
			i1--, j1 = *(n1 + i1) - 48;
		else
			j1 = 0;
		if (i2 > 0)
			i2--, j2 = *(n2 + i2) - 48;
		else
			j2 = 0;
		l--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
