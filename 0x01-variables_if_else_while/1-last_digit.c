#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print last digit in random numbers
 *
 * Description: prints last digit in random number
 *
 * Return: Always 0
 */

int main(void)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit od %d is %d and is lass than 6 and not 0\n", n, last);
	return (0);
}
