#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		printf("%d", numb);
	}
	printf("\n");
	return (0);
}
