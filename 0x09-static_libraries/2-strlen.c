#include "main.h"

/**
 * _strlen - returns the length of a string.
 *@s: the string to be checked
 * Return: the length of a string.
 */

int _strlen(char *s)
{
        int l = 0;

        while (*s++)
                l++;
        return (l);
}
