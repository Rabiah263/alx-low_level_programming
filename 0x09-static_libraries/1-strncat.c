#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: to copy to.
 * @src: to copy from.
 * @n: the size of byte to be copied.
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
        int m;
        int k;

        m = 0;
        while (dest[m] != '\0')
        {
          m++;
        }

        k = 0;
        while (k < n && src[k] != '\0')
        {
          dest[m] = src[k];
          m++;
          k++;
        }
        dest[m] = '\0';
        return (dest);
}
