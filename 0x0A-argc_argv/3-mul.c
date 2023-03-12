#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *        print the result of the multiplication,
 *        followed by a new line
 * @argc: the number od argument.
 * @argv: the array of pointers to arg.
 * Return: 0 if success, or 1 and print Error if otherwise.
 */

int main(int argc, char *argv[])
{
	int m;
	int n;
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	k = m * n;

	printf("%d\n", k);

	return (0);
}
