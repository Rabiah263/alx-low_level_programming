#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * The two digits must be different
 * Print only the smallest combination of two digits
 *
 * Return: 0
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar((first % 10) + '0');
			putchar((second	% 10) + '0');

			if (first == 8 && second == 9)

				continue;

			putchar(',');
			putchar(' ');

		}

	}

	putchar('\n');

	return (0);
}
