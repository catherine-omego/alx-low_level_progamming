#include "main.h"

/**
 * _strspn - counts the no of bytes of a string contained in another string
 *
 * @s: string to be searched
 *
 * @accept: string to be searched for
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0, supposed_count = 0;

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		supposed_count++;

		if (count == 0 || count != supposed_count)
			break;
	}
	return (count);
}
