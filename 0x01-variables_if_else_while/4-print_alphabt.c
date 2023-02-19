#include <stdio.h>

/**
 * main - Print all the letters in lowercase except q and e.
 *
 * Return: 0
 */

int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		if (r != 'q' && r != 'e')
		{
		putchar(r);
		}
		r++;
	}
	putchar('\n');
	return (0);
}
