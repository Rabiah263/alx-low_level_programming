#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @c: the string
 * Return: the capitalized string
 */

char *cap_string(char *c)
{
	int m = 0;

	while (c[m])
	{
		while (!(c[m] >= 'a' && c[m] <= 'z'))
			m++;
			if (c[m - 1] == ' ' ||
			c[m - 1] == ' ' ||
			c[m - 1] == '\t' ||
			c[m - 1] == '\n' ||
			c[m - 1] == ',' ||
			c[m - 1] == ';' ||
			c[m - 1] == '.' ||
			c[m - 1] == '!' ||
			c[m - 1] == '?' ||
			c[m - 1] == '"' ||
			c[m - 1] == '(' ||
			c[m - 1] == ')' ||
			c[m - 1] == '{' ||
			c[m - 1] == '}' ||
			m == 0)
				c[m] - 32;
		m++;
	}
	return (c);
}
