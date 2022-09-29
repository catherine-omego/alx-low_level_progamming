#include "main.h"

/**
 * is_prime - checks for a prime number
 *
 * @n: number to be checked
 *
 * @y: a buffer
 *
 * Return: 0 or 2
 */

int is_prime(int n, int y)

{
	if (n == 1)
		return (0);

	else if (n % y == 0 && y != n && y != 1)
		return (0);

	else if (n % y == 0 && y == n)
		return (1);

	else
		return (is_prime(n, y + 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 *
 * @n: number to be checked
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
