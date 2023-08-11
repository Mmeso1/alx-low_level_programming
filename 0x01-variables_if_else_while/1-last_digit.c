#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function
 * Description: Identifying and comparing last digits
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int rem;
	rem = n % 10;

	printf("Last digit is");

	if (rem > 5)
	{
		printf(" %i and is greater than 5\n", rem);
	}
	else if (rem == 0)
	{
		printf(" %i and is 0\n", rem);
	}
	else
	{
		printf(" %i and is less than 6 and not 0\n", rem);
	}
	return (0);
}
