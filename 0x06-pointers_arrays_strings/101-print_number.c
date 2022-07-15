/**
* print_number - print an integer
* @n: is integer
*
* Return: void
*/
void print_number(int n)
{

	unsigned int i;
	unsigned int j;
	unsigned int k = 1;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	for (j = i; j > 9; j /= 10)
	{
		k *= 10;
	}

	while (k >= 1)
	{
		_putchar(((i / k) % 10) + 48);
		k /= 10;
	}
}
