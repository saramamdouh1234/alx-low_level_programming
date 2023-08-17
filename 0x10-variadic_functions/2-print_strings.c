#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings -  function that prints string
* @separator: This is the input separator
* @n: This is the number of items
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list scr;
	unsigned int count;

	va_start(scr, n);
	for (count = 0; count < n; count++)
	{
		char *ptr;
		s = va_arg(scr, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator != NULL && (count + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(scr);
}
