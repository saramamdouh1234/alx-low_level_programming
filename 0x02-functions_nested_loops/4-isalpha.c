#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase character
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * @c: the character in ASCi table
 * Return: 1 for lowercase. 0 for uppercase
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
