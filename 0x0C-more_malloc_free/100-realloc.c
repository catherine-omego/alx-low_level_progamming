#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a block of memory
 *
 * @ptr: pointer to the previously allocated memory
 *
 * @old_size: size of the previous memory
 *
 * @new_size: new size
 *
 * Return: pointer to the reallocated memory and NULL if otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	int *asyn;

	if (new_size == old_size)
		return (ptr);

	asyn = realloc(ptr, new_size);

	if (asyn == NULL)
		return (NULL);

	return (asyn);
}
