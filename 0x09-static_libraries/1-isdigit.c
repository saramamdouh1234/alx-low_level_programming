#include "main.h"

/**
 * _isdigit - Check input  for a digit (0 through 9)
 * @c: input
 * Return: 1 if is a digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
