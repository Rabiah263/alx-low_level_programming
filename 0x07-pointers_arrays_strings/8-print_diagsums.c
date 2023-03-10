#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: the matrix of int.
 * @size: the size.
 */

void print_diagsums(int *a, int size)
{
	int m; /* the index */
	int n = 0; /* the first sum */
	int o = 0; /* the second sum */

	for (m = 0; m < size; m++)
	{
		n += a[m];
		a += size;
	}
	a -= size;

	for (m = 0; m < size; m++)
	{
		o += a[m];
		a -= size;
	}

	printf("%d, %d\n", n, o);
}
