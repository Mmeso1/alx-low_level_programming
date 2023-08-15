#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks if a char is lowercase
 * Description: Checks if lower
 * Returns: Zero
 */
int _islower(int c)
{
	if (islower(c) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
