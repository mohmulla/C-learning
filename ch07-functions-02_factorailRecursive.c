// program of factorial in recursive

#include <stdio.h>

int main(void)
{

	int number = 0;

	// take input into number
	printf("enter number to factorial: ");
	scanf("%i", &number);

	printf("%i! = %i", number, factorial(number));

	return 0;

}

int factorial(int number)
{
	if (number == 0)
		return 1;

	return number * factorial(number - 1);
}
