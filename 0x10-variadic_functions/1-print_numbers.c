#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers,
 *                 followed by a new line.
 *
 * @separator: This is input separator
 * @n: This is the input number
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list scr;
	unsigned int count;
	
	va_start(scr, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(scr, const unsigned int));
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(scr);
}
