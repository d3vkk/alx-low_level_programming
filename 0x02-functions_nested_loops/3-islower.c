#include "main.h"

/**
 * _islower - check for lowercase letter c
 * @c: is ascii
 *
 * Return: 1 if lowercase letter found, 0 otherwise
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
