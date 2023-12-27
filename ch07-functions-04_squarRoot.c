// program to find squar root

#include <stdio.h>

int main(void)
{
	float number = 0.0;

	float squarRoot(float x);
	float absoluteValue(float x);


	printf("enter Number : ");
	scanf("%f", &number);

	printf(" sqrt(%f) = %f\n", number, squarRoot(number));

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
