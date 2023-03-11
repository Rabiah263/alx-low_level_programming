#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the character
 * Return: 0 If there are no numbers in the string.
 */

int _atoi(char *s)
{
        int m, n, p, q, r, num;

        m = 0;
        n = 0;
        p = 0;
        q = 0;
        r = 0;
        num = 0;

        while (s[q] != '\0')
                q++;

        while (m < q && r == 0)
        {
                if (s[m] == '-')
                        ++n;

                if (s[m] >= '0' && s[m] <= '9')
                {
                        num = s[m] - '0';
                        if (n % 2)
                                num = -num;
                        p = p * 10 + num;
                        r = 1;
                        if (s[m + 1] < '0' || s[m + 1] > '9')
                                break;
                        r = 0;
                }
                m++;
        }

        if (r == 0)
                return (0);

        return (p);
}
