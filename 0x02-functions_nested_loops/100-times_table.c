#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to be printed
 */

void print_times_table(int n)
{
	int f, g, h;

	if (n >= 0 && n <= 15)
	{
		for (f = 0; f <= n; f++)
		{
			_putchar('0');

			for (g = 1; g <= n; g++)
			{
				_putchar(',');
				_putchar(' ');

				h = f * g;

				if (h <= 99)
					_putchar(' ');
				if (h <= 9)
					_putchar(' ');

				if (h >= 100)
				{
					_putchar((h / 100) + '0');
					_putchar((h / 10) % 10 + '0');
				}
				else if (h <= 99 && h >= 10)
				{
					_putchar((h / 10) + '0');
				}
				_putchar((h % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
