#include "main.h"

/**
 * helperFunction - check if the square root of a number exists
 *
 * @num: the number to check
 *
 * @pSqrt: possible square root of the number
 *
 * Return: the suare root of the number
 */

int helperFunction(int num, int pSqrt)

{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion -  gives the natural square root of a number
 *
 * @n: the number to find the square root of
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)

{
	if (n < 1)
		return (-1);
	else
		return (helperFunction(n, 0));
}
