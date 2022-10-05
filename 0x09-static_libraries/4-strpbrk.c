#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - finds a string for any a set of bytes
 *
 * @s: string to be searched
 *
 * @accept: string to be searched for
 *
 * Return: The pointer to the first occurence
 */

char *_strpbrk(char *s, char *accept)

{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
