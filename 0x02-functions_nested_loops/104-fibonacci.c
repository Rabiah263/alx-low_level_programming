#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0.
 */

int main(void)
{
	int m;
	unsigned long d1 = 0;
	unsigned long d2 = 1;
	unsigned long d3, d1h1, d1h2, d2h1, d2h2, h1, h2;

	for (m = 0; m < 92; m++)
	{
		d3 = d1 + d2;
		printf("%lu", d3);

		d1 = d2;
		d2 = d3;
	}

	d1h1 = d1 / 10000000000;
	d2h1 = d2 / 10000000000;
	d1h2 = d1 % 10000000000;
	d2h2 = d2 % 10000000000;

	for (m = 93; m < 99; m++)
	{
		h1 = d1h1 + d2h1;
		h2 = d1h2 + d2h2;
		if (d1h2 + d2h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (m != 98)
			printf(", ");

		d1h1 = d2h1;
		d1h2 = d2h2;
		d2h1 = h1;
		d2h2 = h2;
	}
	printf("\n");
	return (0);
}
