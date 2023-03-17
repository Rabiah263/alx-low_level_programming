#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum range of value stored
 * @max: maximum range of values stored and the number os element
 * Return: pointer to the new array.
 */

int *array_range(int min, int max)
{
	int *p;

	int m;
	int n; /*the size*/

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;

	p = malloc(sizeof(int) * n);

	if (p == NULL)
	{
		return (NULL);
	}

	for (m = 0; min <= max; m++)
	{
		p[m] = min++;
	}

	return (p);
}
