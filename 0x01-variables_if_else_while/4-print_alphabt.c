#include <stdio.h>

/**
 *main - This is the main function
 * Description: Print all lowercase letters except q and e
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
		putchar('\n');

		return (0);
	}
