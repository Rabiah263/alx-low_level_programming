#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: the chessboerd.
 */

void print_chessboard(char (*a)[8])
{
	int m; /* the first index */
	int n; /* the second index */

	for (m = 0; a[m][7]; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
	}
}
