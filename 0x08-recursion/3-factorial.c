#include "main.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: number to find the factorial of
 *
 * Return: the factorial of the number
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
