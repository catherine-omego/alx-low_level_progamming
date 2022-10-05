#include "main.h"

/**
 * _islower - entry
 *
 * @c: the variable being compared
 *
 * Return: 1 if @c is lower and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
