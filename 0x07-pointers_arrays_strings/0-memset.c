#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer to the mmry area to be filled.
 * @c: the char the will fill the memory area.
 * @n: the number of byte to be filled with memory.
 * Return: pointer to the memory area s.
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int r;
	unsigned char *m = s, v = c;

	for (r = 0; r < n; r++)
		m[r] = v;

	return (m);
}
