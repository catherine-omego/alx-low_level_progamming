#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * dest is the destination string
 *
 * src is the source to be concatenated
 *
 * n is the limit of concatenation
 *
 * Return: a pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)

{

	int i;

	int destlen = 0;

	int counter = 0;

	while (dest[counter] != '\0')
	{
		destlen++;

		counter++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];

	dest[destlen + i] = '\0';

	return (dest);
}
