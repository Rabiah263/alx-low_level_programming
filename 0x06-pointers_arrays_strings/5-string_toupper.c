#include "main.h"
/**
 * string_toupper - changes all lwrcs ltrs of a strg to upprcs.
 * @c: the pointer.
 * Return: a string in uppercase
 */

char *string_toupper(char *c)
{
	int m;

	m = 0;
	while (c[m] != '\0')
	{
		if (c[m] >= 'a' && c[m] <= 'z')
			c[m] = c[m] - 32;
		m++;
	}
	return (c);
}
