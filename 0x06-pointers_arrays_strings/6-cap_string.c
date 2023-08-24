#include <stdbool.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes sentences
 * @s: arg
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	bool new_word = true;

	while (s[i])
	{
		if (is_separator(s[i]))
			new_word = true;

		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (new_word)
		{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
				new_word = false;
			}
		}
		else 
		{ 
			new_word = false;
		}
		i++
	}
	return (s);
}
