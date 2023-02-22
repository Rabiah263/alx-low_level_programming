#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int g;
	int h;

	for (g = 0; g <= 23; g++)
	{
		for (h = 0; h <= 59; h++)
		{
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
		}
	}
}
