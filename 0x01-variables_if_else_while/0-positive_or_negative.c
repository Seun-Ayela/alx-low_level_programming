#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints "is positive"
 * Prints "is zero"
 * Prints "is negative"
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	scanf("%i", &n);
	if (n > 0)
	{
		printf("%i is positive\n", n);
		return (1);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
		return (1);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
		return (1);
	}
	return (0);   
}
