#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: the number of argument.
 * @argv: the arrat of pointers to argument.
 * Return: 0 success or 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int cents; /*the ammount of cnts to gv bck*/
	int c = 0; /*the number of coins*/

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		c++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", c);

	return (0);
	
}
