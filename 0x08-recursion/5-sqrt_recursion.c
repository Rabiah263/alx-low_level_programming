#include "main.h"

/**
 * checkSqrt - checks if a number has a square root.
 * @numb: the number.
 * @pSqrt: possible square root
 * Return: squqre root of the number or -1 if there is an error.
 */

int checkSqrt(int numb, int pSqrt)
{
	if ((pSqrt * pSqrt) == numb)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > numb)
		{
			return (-1);
		}
		else
		{
			return (checkSqrt(numb, pSqrt + 1));
		}
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 * Return: the result.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (checkSqrt(n, 0));
	}
}
