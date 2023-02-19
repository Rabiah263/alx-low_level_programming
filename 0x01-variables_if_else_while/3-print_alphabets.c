#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char r = 'a';
	char a = 'A';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
