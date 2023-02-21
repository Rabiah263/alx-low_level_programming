#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char d;
	int l = 0;

	while (l < 10)
	{
	for (d = 'a'; d <= 'z'; d++)
	{
	_putchar(d);
	}
	_putchar('\n');
	l++;
	}

}
