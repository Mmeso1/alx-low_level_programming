#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] == '+')
		{

		}
	}

		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			result = result * 10 + (s[i] - '0');
		}

		return (result * sign);
}
