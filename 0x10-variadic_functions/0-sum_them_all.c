#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - check the code for Holberton School students.
* @n: number of arguments
* Return: Always 0.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list scr;
int sum = 0;
unsigned int i;
if (n == 0)
return (0);
va_start(scr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(scr, int);
}
va_end(scr);
return (sum);
}
