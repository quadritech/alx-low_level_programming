#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Description: to print the last digit of no stored
 *Return: 0
 */
int main(void)
{
	int n;
	int m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n" n, m);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n" n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n" n, m);
	}
	return (0);
}
