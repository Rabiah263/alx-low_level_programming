#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest:the place to copy to.
 * @src: the place to copy from.
 * Return: the string.
 */

char *_strcpy(char *dest, char *src)
{
        int m = 0;
        int n = 0;

        while (*(src + m) != '\0')
        {
          m++;
        }

        for (n = 0; n < m; n++)
        {
          dest[n] = src[n];
        }

        dest[m] = '\0';

        return (dest);
}
