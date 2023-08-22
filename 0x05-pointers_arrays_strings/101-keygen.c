#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: int
 */

int main(void)
{
	srand(time(NULL));
	int sum = 2772;
	int current_sum = 0;
	char password[64] = {'\0'};

	while (current_sum < sum)
	{
		int random_char = rand() % 81 + 44;
		int char_value = random_char - 44;

		if (current_sum + char_value < sum)
		{
			password[current_sum / 4] = random_chr;
			current_sum += char_value;
		}
	}

	printf("%s\n", password);
	return (0);
}
