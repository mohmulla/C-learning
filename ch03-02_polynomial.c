// program that solves 3x^3 - 5x^2 + 6 for x = 2.55

#include <stdio.h>

int main(void)
{
	float x = 2.55;
	float solution;

	solution = (3 * x * x * x) - (5 * x * x) + 6;

	printf("solution for 3x^3 - 5x^2 - 6 = %f", solution);

	return 0;

}
