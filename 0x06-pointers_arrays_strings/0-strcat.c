#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src to
 * the end of the string pointed to by dest
 * dest is the string that will be appended
 * src is the string to be concatenated upon
 * return: returns the pointer to dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len=o;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
