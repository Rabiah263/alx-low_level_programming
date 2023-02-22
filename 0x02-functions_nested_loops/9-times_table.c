#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int start;
	int table;
	int end;

	for (start = 0; start <= 9; start++)
	{
		_putchar('0');

		for (table = 1; table <= 9; table++)
		{
			_putchar(',');
			_putchar(' ');

			end = start * table;

			if (end <= 9)
				_putchar(' ');
			else
				_putchar((end / 10) + '0');

			_putchar((end % 10) + '0');
		}
		_putchar('\n');
	}
}
