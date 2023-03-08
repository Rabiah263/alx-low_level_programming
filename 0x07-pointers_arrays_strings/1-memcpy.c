#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: to copy to.
 * @src: to copy from.
 * @n: number of byte.
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > 0; r++, n--)
	{
		dest[r] = src[r];
	}
	return (dest);
}
