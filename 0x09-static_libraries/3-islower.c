#include "main.h"

/**
 * _islower - checks for lowercase character
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * @c: the character in ASCi table
 * Return: 1 for lowercase. 0 for others
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{return (1);
}
return (0);
}
