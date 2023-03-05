#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords.
 * Return: 0
 */

int main(void)
{
	int pswd[100];
	int m, n, p;

	n = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pswd[m] = rand() % 78;
		n += (pswd[m] + '0');
		putchar(pswd[m] + '0');
		if ((2772 - n) - '0' < 78)
		{
			p = 2772 - n - '0';
			n += p;
			putchar(p + '0');
			break;
		}
	}
	return (0);
}
