#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 * @size: the size of the array.
 * @c: the charecter to assign
 * Return: NULL if size is 0, returns a pointer to the array
 *         or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int m;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);

	for (m = 0; m < size ; m++)
	{
		s[m] = c;
	}

	return (s);
}
