#include "main.h"

/**
 * cap_string - capitalizes sentences
 * @s: arg
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	char separator[] = {32, '\t', '\n', 44, ';', 46,
		'!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		if (s[i] == separator[i] || s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
