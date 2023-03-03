#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string.
 */

void print_rev(char *s)
{
	int k = 0;
	int m;

	while (*s != '\0')
	{
		k++;
		s++;
	}

	s--;
	for (m = k; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
