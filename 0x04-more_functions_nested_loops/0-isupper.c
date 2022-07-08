#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: is integer
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
int is_upper = 0;
char uppercase = 'A';

for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
is_upper = 1;
break;
}
}

return (is_upper);
}
