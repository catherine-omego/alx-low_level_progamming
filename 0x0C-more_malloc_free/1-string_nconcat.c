#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate the first n bytes of a string to another
 *
 * @str1: pointer to the first string
 *
 * @str2: pointer to the second string
 *
 * @size: size of str2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *str1, char *str2, unsigned int size)
{

	unsigned int reg1, reg2;
	char *ptr;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	reg1 = strlen(str1);
	reg2 = strlen(str2) <= size ? strlen(str2) : size;
	ptr = malloc(reg1 + reg2 + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str1);
	strncat(ptr, str2, size);

	return (ptr);
}
