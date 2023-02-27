#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int m;
	int k;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (k = 0; k < m; k++)
				_putchar(' ');
			_putchar('\\');

			if (m == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
