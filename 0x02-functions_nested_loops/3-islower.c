#include "main.h"

/**
 * _islower  function to check if char is lowercase
 * check input of function
 * return: Returns 1 if c is lowercase 
 *Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
