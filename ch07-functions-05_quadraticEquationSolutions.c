// program to find solution to quadratic equation

#include <stdio.h>

int main(void)
{
	int a = 4;
	int b = -17;
	int c = -15;
	_Bool discriminant;
	float solution1;
	float solution2;

	float squarRoot(float x);
	float absoluteValue(float x);
	_Bool discrement(int a, int b, int c);
	float quadraticSolution1(_Bool number, int a, int b, int c);
	float quadraticSolution2(_Bool number, int a, int b, int c);

	solution1 = quadraticSolution1(discrement(a, b, c), a, b, c);
	solution2 = quadraticSolution2(discrement(a, b, c), a, b, c);


	printf("4x^2 - 17x - 15 = 0 solutions are :\n");
	printf("solution 1 : %f\n", solution1);
	printf("solution 1 : %f\n", solution2);


	return 0;
	
}

float squarRoot(float x)
{
	const float epsilon = 0.00001;
	float guess = 1.0;

	float absoluteValue(float x);

	while (absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

float absoluteValue(float x)
{
	if (x < 0)
		x = -x;

	return x;
}

_Bool discrement(int a, int b, int c)
{
	if ((b * b) - 4 * a * c < 0)
		return 0;
	else
		return 1;
}

float quadraticSolution1(_Bool number, int a, int b, int c)
{
	float squarRoot(float x);

	if (number == 0)
	{
		printf("number is imaginary");
		return -1;
	}
	else
	{
		return (  (-b) - (squarRoot( b * b - (4 * a * c) ) )  ) / (2 * a);
	}
	
}

float quadraticSolution2(_Bool number, int a, int b, int c)
{
	float squarRoot(float x);

	if (number == 0)
	{
		printf("number is imaginary");
		return -1;
	}
	else
	{
		return ((-b) + ( squarRoot( b * b - (4 * a * c)) ) ) / (2 * a);
	}

}
