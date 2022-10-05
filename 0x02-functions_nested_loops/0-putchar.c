#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";

	int item;

	for (item = 0; item < 8; item++)
		_putchar(str[item]);
	_putchar('\n');

	return (0);
}
