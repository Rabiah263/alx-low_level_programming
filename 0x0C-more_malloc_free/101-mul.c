#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit character.
 * @s: the string to check.
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
		{
			return (0);
		}
		m++;
	}

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '0')
	{
		m++;
	}

	return(m);
}

/**
 * errors handles error for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1;
	char *s2;

	int p1, p2, p, m, n, d1, d2, *r, a = 0;

	s1 = argv[m], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		errors();
	}
	p1 = _strlen(s1);
	p2 = _strlen(s2);
	p = p1 + p2 + 1;
	r = malloc(sizeof(int) * p);
	if (!r)
	{
		return (1);
	}

	for (m = 0; m <= p1 + p2; p++)
	{
		r[m] = 0;
	}
	for (p1 = p1 - 1; p1 >= 0; p1--)
	{
		d1 = s1[p1] - '0';
		n = 0;
		for (p2 = _strlen(s2) - 1; p2 >= 0; p2--)
		{
			d2 = s2[p2] - '0';
			n += r[p1 + p2 + 1] + (d1 * d2);
			r[p1 + p2 + 1] = n % 10;
			n /= 10;
		}
		if (n > 0)
			r[p1 + p2 + 1] += n;
	}
	for (m = 0; m < p - 1; m++)
	{
		if (r[m])
		{
			a = 1;
		}
		if (a)
			_putchar(r[m] + '0');
	}
	if (!a)
	{
		_putchar('0');
	}
	_putchar('\n');
	free(r);
	return(0);
}
