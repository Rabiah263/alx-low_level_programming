#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * starting with the first character.
 * @str: the string.
 */

void puts2(char *str)
{
	int k = 0;
	int n = 0;
	char *v = str;
	int m;

	while (*v != '\0')
	{
		v++;
		k++;
	}

	n = k - 1;
	for (m = 0; m <= n; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}
