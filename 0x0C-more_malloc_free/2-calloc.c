#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - dynamically memory allocation for array
 *
 * @nmemb: lenght of char of the array
 *
 * @size: size of the memory
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
