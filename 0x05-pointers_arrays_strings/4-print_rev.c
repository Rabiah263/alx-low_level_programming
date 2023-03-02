#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string.
 */

void print_rev(char *s)
{
	int k = 0, l;

	while (s[l++])
		k++;

	for (l = k - 1; l >= 0; l--)
		_putchar(s[l]);

	_putchar('\n');
}
