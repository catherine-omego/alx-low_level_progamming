#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates the string pointed to by src to the end of the string pointed to by dest
 * dest is the string that will be appended
 * src is the string to be concatenated upon
 * return: returns the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = "\0";
	return (dest);

}
