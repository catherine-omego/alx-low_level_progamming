#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This is the memory allocation
 *
 * @b: The number of bytes to be malloced
 *
 * Return: Void Pointer
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
