#include "main.h"

/**
 * _length - checks the length of a a string
 * @s: the string
 * Return: the lenth of the string.
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: index
 * @lg: length of string
 * @s: string
 * Return: 1 if is polindrome or 0 if not.
 */

int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
