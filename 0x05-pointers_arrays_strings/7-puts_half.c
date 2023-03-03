#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the sting.
 * If the number of characters is odd,
 * the function should print the last n characters of the string.
 * where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int k = 0;
	int n;
	int h;

	for (h = 0; str[h] != '\0'; h++)
		k++;

	n = (k / 2);

	if ((k % 2) == 1)
		n = ((k + 1) / 2);

	for (h = n; str[h] != '\0'; h++)
		_putchar(str[h]);

	_putchar('\n');
}
