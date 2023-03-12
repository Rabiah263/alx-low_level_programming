#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: the number of argument.
 * @argv: the arrat of pointers to argument.
 * Return: 0 success or 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int m; /*the number*/
	int n; /*the iterartor of the array*/
	int r; /*the result*/
	int c[] = {25, 10, 5, 1}; /*the unlimited number of coins*/

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	r = 0;

	if (m < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && m >= 0; n++)
	{
		while (m >= c[n])
		{
			r++;
			m -= c[n];
		}
	}

	printf("%d\n", r);
	return (0);
}
