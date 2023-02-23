#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	int m;

	unsigned long d1 = 0;
	unsigned long d2 = 1;
	unsigned long b;

	for (m = 0; m < 50; m++)
	{
		b = d1 + d2;
		printf("%lu", b);

		d1 = d2;
		d2 = b;

		if (m == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
