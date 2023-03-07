#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the content.
 * @n: the size of the array
 */

void reverse_array(int *a, int n)
{
	int m;
	int k;

	for (m = 0; m < n; m++)
	{
		n--;
		k = a[m];
		a[m] = a[n];
		a[n] = k;
	}
}
