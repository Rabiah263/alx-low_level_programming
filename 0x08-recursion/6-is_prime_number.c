#include "main.h"

/**
 * hf - retorn 0 or 1.
 * @numb: the number.
 * @m: possible prime factor.
 * Return: the result.
 */

int hf(int numb, int m)
{
	if (m < numb)
	{
		if (numb % m == 0)
		{
			return (0);
		}
		else
		{
			return (hf(numb, m + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - check if n is a prime number.
 * @n: the number.
 * Return: the result.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (hf(n, 2));
	}
}
