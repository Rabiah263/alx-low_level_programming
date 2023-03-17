#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1:the first string to add to.
 * @s2: the second string to add from.
 * @n: the number of byte.
 * Return: a pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int m = 0;
	unsigned int k = 0;
	unsigned int p1 = 0;
	unsigned int p2 = 0; /*second length*/

	while (s1 && s1[p1])
		p1++;

	while (s2 && s2[p2])
	{
		p2++;
	}
	if (n < p2)
	{
		r = malloc(sizeof(char) * (p1 + n + 1));
	}
	else
	{
		r = malloc(sizeof(char) * (p1 + p2 + 1));
	}
	if (!r)
	{
		return (NULL);
	}
	while (m < p1)
	{
		r[m] = s1[m];
		m++;
	}
	while (n < p2 && m < (p1 + n))
	{
		r[m++] = s2[k++];
	}
	while (n >= p2 && m < (p1 + p2))
	{
		r[m++] = s2[k++];
	}
	r[m] = '\0';
	return (r);
}
