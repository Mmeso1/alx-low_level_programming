#include <stdio.h>
#include "main.h"

int main(void)
{
	int a, b, c;
	int largest;

	a = -92;
	b = 982;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
