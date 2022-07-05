#include "main.h"

/**
 * _isalpha - Check for alphanumeric character c
 * @c: is ascii
 *
 * Return: 1 if alphanumeric letter found, 0 otherwise
 *
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
