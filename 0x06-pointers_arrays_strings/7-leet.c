#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @c: string
 * Return: the value of c.
 */

char *leet(char *c)
{
	int m;
	int n;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; c[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (c[m] == s1[n])
			{
				c[m] = s2[n];
			}
		}
	}
	return (c);
}
