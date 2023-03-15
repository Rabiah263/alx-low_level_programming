#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: the string.
 * Return: NULL if str = NULL
 *        On success, the _strdup function returns a pointer
 *        to the duplicated string. It returns NULL if insufficient
 *        memory was available
 */

char *_strdup(char *str)
{
	char *r;
	int m = 0;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[m] != '\0')
	{
		m++;
	}

	r = malloc(sizeof(char) * (m + 1));
	if (r == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{
		r[n] = str[n];
	}

	return (r);
}
