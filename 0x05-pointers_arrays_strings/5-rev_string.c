#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string.
 */

void rev_string(char *s)
{
	char r = s[0];
	int k = 0;
	int m;

	while (s[k] != '\0')
		k++;
	for (m = 0; m < k; m++)
	{
		k--;
		r = s[m];
		s[m] = s[k];
		s[k] = r;
	}
}
