#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string.
 * @accept: the the prefix.
 * Return: a pointer to the byte in s that matches
 *         one of the bytes in accept, or NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
        int m; /* the index variable */

        while (*s)
        {
          for (m = 0; accept[m]; m++)
          {
                if (*s == accept[m])
                {
                        return (s);
                }
          }
          s++;
        }
        return ('\0');
}
