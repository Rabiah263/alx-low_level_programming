#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check the condition of the last digit of a random number
 * if it is greater than 5, is 0, is less than 6 and not 0.
 * Return: 0
 */

int main(void)
{
	int n;
	int lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10;
	if (lastdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdgt);
	}
	else if (lastdgt < 6 && lastdgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
