#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer to the mmry area to be filled.
 * @b: the byte value to fill the memory with.
 * @n: the number of byte to be filled with memory.
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
        int r;
        for (r = 0; n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
