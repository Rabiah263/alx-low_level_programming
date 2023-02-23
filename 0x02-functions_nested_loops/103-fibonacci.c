#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms.
 *
 * Return: 0.
 */

int main(void)
{
	unsigned long d1 = 0;
	unsigned long d2 = 1;
	unsigned long d3;
	float f;

	while (1)
	{
		d3 = d1 + d2;
		if (d3 > 4000000)
			break;

		if ((d3 % 2) == 0)
			f += d3;
		d1 = d2;
		d2 = d3;
	}
	printf("%.0f\n", f);

	return (0);
}
