#include "main.h"

/*
 * _memset -  fills a block of memory
 *
 * @s: to be filled with a buffer
 *
 * @b: char that will be used to fil the buffer
 *
 * @n:  the number of bytes to be filled
 *
 * Return: a pointer to be memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
