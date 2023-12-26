// program that defines and uses arrays

#include <stdio.h>

int main(void)
{
	int   numbers[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char  word[7] = { 'h', 'e', 'l', 'l', 'o', '!', '?' };

	float matrix[3][3] = {
							{1.1, 2.2, 3.3},
							{4.4, 5.5, 6.6},
							{7.7, 8.8, 9.9}
	};

	// print numbers array
	for (int i = 0; i < 10; i++)
		printf("%i ", numbers[i]);

	printf("\n");

	// print word array
	for (int i = 0; i < 7; i++)
		printf("%c ", word[i]);

	printf("\n");

	// print matrix array
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%.2f ", matrix[i][j]);

		printf("\n");
	}

	printf("\nwe are DONE\n");

	return 0;
}
