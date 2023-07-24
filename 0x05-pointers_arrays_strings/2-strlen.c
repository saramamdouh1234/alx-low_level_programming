#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\n'; s++)
		++counter;
	return (counter);
}
