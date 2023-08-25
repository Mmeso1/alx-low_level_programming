#include "main.h"

/**
 * cap_string - capitalizes sentences
 * @s: arg
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	bool new_word = 1;

	while (s[i])
	{
		if (is_separator(s[i]))
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
