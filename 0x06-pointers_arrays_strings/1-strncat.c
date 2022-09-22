/**
 * _strncat - concatenates two strings
 * dest is the destination value
 * src is the source value
 * n is the limit of concatenation
 * return: a pointer to the resulting string destination
 */
char *_strncat(char *dest, char *src, int n);
{
	int dlen = 0, j =0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = *\0*;

	return (dest);
}
