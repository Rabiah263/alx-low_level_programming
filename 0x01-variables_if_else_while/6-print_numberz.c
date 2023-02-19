#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * using the putchar function
 *
 * Return: 0
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar('0' + numb);
	}
	putchar('\n');
	return (0);
}
