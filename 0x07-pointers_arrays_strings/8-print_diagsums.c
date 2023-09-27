#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A func to print the sum of 2 diagonals in square matrix
 * @a: the matrix
 * @size: dim
 * Return: nothing (VOID)
 */
void print_diagsums(int *a, int size)
{
	int str1,str2, y;

	str1 = 0;
	str2 = 0;

	for (y = 0; y < size; y++)
	{
		str1 = str1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		str2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", str1, str2);
}
