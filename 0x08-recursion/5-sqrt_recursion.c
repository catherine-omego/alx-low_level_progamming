#include "main.h"

/**
 * _sqrt -  gives the square root of a number
 *
 * @n: the number which is the sum
 *
 * @y: the bufffer we will use
 *
 * Return: the square root of n
 */

int _sqrt(int n, int y)

{
	if (n == 1)
		return (1);

	else if (y == n || n < 0)
		return (-1);

	else if (y * y == n)
		return (y);

	else
		return (_sqrt(n, y + 1));
}
