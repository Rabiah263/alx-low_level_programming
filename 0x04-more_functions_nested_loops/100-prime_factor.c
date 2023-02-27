#include <stdio.h>

/**
 * main - finds and prints the largest prime
 * factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long t = 612852475143;
	long s;

	while (s < (t / 2))
	{
		if ((t % 2) == 0)
		{
			t /= 2;
			continue;
		}

		for (s = 3; s < (t / 2); t += 2)
		{
			if ((t % s) == 0)
				t /= s;
		}
	}

	printf("%ld\n", t);

	return (0);
}
