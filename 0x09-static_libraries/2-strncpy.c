#include "main.h"

/**
 * _strncpy - Concatenates one string
 *
 * @dest: The destination string
 *
 * @src: The string to be concatenated
 *
 * @n: number of bytes to be copied
 *
 * Return: The destination string
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
