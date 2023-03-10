#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string to check from.
 * @needle: the the string to check.
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int m;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		m = 0;

		if (haystack[m] == needle[m])
		{
			do {
				if (needle[m + 1] == '\0')
				{
					return (haystack);
				}
				m++;
			} while (haystack[m] == needle[m]);
		}
		haystack++;
	}
	return ('\0');
}
