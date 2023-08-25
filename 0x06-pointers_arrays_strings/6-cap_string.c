#include "main.h"

/**
 * cap_string - capitalizes sentences
 * @s: arg
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;
	char separator[] = {32, '\t', '\n', 44, ';', 46,
		'!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		if (s[i] == separator[i])
			new_word = 1;

		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (new_word)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
				new_word = 0;
			}
		}
		else
		{
			new_word = 0;
		}
		i++;
	}
	return (s);
}
