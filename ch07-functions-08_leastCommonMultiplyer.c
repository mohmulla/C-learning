// program to find the least common multiplyer

#include <stdio.h>

int main(void)
{
	int n1 = 15, n2 = 10;

	int gcd(int number1, int number2);
	int lcm(int number1, int number2);

	printf("the greatest common deviser of %i and %i = %i\n", n1, n2, gcd(n1, n2));
	printf("the least common muliplyer of %i and %i = %i\n", n1, n2, lcm(n1, 2));

	return 0;
}

int gcd(int number1, int number2)
{
	int temp;

	while (number2 != 0)
	{
		temp = number1 % number2;
		number1 = number2;
		number2 = temp;
	}

	return number1;
}

int lcm(int number1, int number2)
{
	int gcd(int number1, int number2);

	if (number1 >= 0 && number2 >= 0)
	{
		return number1 * number2 / gcd(number1, number2);
	}
}
