#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: The character that should be determined
 *
 * Return: 1 for alphabetic character or 0 if otherwise
 */

int _isalpha(int c)
{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
        return (1);
        }
        return (0);
}
