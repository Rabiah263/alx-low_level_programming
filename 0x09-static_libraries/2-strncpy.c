#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: to copy to.
 * @src: to copy from.
 * @n: the size to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int m;

        m = 0;
        while (m < n && src[m] != '\0')
        {
          dest[m] = src[m];
          m++;
        }
        while (m < n)
        {
          dest[m] = '\0';
          m++;
        }
        return (dest);
}
