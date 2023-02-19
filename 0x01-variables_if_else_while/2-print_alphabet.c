#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
