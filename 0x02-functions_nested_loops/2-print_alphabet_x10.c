#include "main.h"

/**
 * prin_alphsbet_x10 - function that prints 10 times the alphabet
 *
*/

void print_alphabet_x10(void);
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
