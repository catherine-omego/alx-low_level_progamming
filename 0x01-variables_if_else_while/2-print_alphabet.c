#include <stdio.h>
/**
 * main - print the letters of th alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
