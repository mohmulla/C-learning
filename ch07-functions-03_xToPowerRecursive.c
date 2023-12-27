// program of x to n

#include <stdio.h>

int main(void)
{

	int number = 0;
	int power = 0;

	long int x_to_n(int number, int power);

	// take input into number
	printf("enter number and power : ");
	scanf("%i %i", &number, &power);

	printf("%i^%i = %i", number, power, x_to_n(number, power));

	return 0;

}

long int x_to_n(int number, int power)
{
	if (power == 0)
		return 1;

	return number * x_to_n(number, power - 1);
}
