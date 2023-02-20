#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int m;
	char n;

	for (m = 0; m < 10; m++)
	{
		putchar((m % 10) + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
