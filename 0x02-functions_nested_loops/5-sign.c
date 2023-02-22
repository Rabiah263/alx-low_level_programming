#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the characted to be determined
 *
 * Return: 1 if n  is less than zero, or 0 if n is zero, or -1 if otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar (43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar (45);
	return (-1);
	}
	else
	{
	_putchar (48);
	return (0);
	}
}
