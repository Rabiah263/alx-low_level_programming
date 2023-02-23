#include <stdio.h>

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int f, g = 0;

	while (f <= 1024)
	{
		if ((f % 3 == 0) || (f % 5 == 0))
		{
			g += f;
		}
		f++;
	}
	printf("%d\n", g);
	return (0);
}
