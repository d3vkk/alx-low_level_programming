/**
* reverse_array - reverse items of an array of integers
* @a: is pointer of integer
* @n: is integer
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int rev;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
