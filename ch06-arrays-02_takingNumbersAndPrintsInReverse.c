// program that takes 10 numbers into an array and prints them in reverse

#include <stdio.h>

int main(void)
{

	int numbersEntered[10];

	printf("enter 10 numbers : ");

	for (int i = 0; i < 10; i++)
		scanf("%i", &numbersEntered[i]);

	printf("\n");

	for (int i = 10 - 1; i > -1; i--)
		printf("%i\n", numbersEntered[i]);

	return 0;

}
