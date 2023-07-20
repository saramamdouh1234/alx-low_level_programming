#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int y, x;
if (n > 0)
{
for (y = 0; y < n; y++)
{
for (x = 0; x < y; x++)
_putchar(' ');

_putchar('\\');

if (y == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
