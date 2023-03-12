#include <stdio.h>

/**
 * main -  program that prints all arguments it receives.
 * @argc: number of argument.
 * @argv: array of pointer to the argument\string.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
