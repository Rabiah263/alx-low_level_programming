#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled.
 * @b: the character to copy.
 * @n: the number of times to copy b
 * Return: a pointer to the memory areea s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of the array element.
 * @size: the size of each the element in the array
 * Return: a pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	_memset(p, 0, nmemb * size);

	return (p);
}
