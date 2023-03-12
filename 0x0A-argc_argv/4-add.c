#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print addition of positive numbers,
 *        followed by a new line
 *        print 0 if no number is passed.
 * @argc: number of argument.
 * @argv: array og pointers to argument.
 * Return: 0 success, or 1 and print Error if there are symbols
 *        that are not digit.
 */

int main(int argc, char *argv[])
{
	int m; /* the number */
	int n; /* the digit */
	int p = 0; /* the addition */

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n]; n++)
		{
			if (argv[m][n] < '0' || argv[m][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		p += atoi(argv[m]);
	}

	printf("%d\n", m);

	return (0);
}
