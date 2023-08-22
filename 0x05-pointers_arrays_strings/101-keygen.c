#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: int
 */

int main(void)
{
	int sum = 2772;
	int current_sum = 0;
	char password[64] = {'\0'};
	srand(time(NULL));
	int random_char, char_value;

	while (current_sum < sum)
	{
		random_char = rand() % 81 + 44;
		char_value = random_char - 44;

		if (current_sum + char_value < sum)
		{
			password[current_sum / 4] = random_char;
			current_sum += char_value;
		}
	}

	printf("%s\n", password);
	return (0);
}
