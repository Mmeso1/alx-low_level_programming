#include "main.h"

/**
 * infinite_add - add numbers that are in string form
 * @n1: first num
 * @n2: second num
 * @r: the buffer
 * @size_r: size of the buffer
 * Return: char pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = size_r - 2, j = 0, k = 0, carry = 0;

	while (n1[j] || n2[k])
	{
		int num1 = (n1[j]) ? (n1[j] - '0') : 0;
		int num2 = (n2[k]) ? (n2[k] - '0') : 0;
		int sum = num1 + num2 + carry;

		if (i < 0)
			return (0);

		r[i] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j += (n1[j]) ? 1 : 0;
		k += (n2[k]) ? 1 : 0;
	}

	if (carry > 0 && i >= 0)
		r[i] = carry + '0';
	else if (carry > 0)
		return (0);

	return (r + i + 1);
}
