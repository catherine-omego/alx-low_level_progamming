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
	int index = 0, dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}

	for (index = 0; src[index] != 0; index++)
	{
		dest[dest_len] = src[index];
		dest_len++;
	}

	dest[dest_len] = "\0";
	return (dest);

}
