#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		putchar((z % 10) + '0');

		if (z == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
