#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of argument.
 * @argv: array of pointers to argmt.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argv; /* ignore the unused variable argv*/

	printf("%d\n", argc - 1);

	return (0);
}
