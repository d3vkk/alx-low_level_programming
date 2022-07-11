/**
* swap_int - swap the values of two integers using pointers
* @a: is pointer of integer
* @b: is pointer of integer
*
* Return: void
*
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
