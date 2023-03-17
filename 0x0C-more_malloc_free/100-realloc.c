#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  is a pointer to the memory previously allocated with a call to malloc
 * @old_size:the size, in bytes, of the allocated space for ptr
 * @new_size:the new size, in bytes of the new memory block
 * Return: a pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *op; /*the old pointer*/
	unsigned int m;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new)size);
	}
	p = malloc(new_size);

	if (!p)
	{
		return(NULL);
	}

	op = ptr;

	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
		{
			p[m] = op[m];
		}
	}

	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
		{
			p[m] = op[m];
		}
	}

	free(ptr);
	return (p);
}
