// program that converts 27dig Fahrenhiet to Celsius

#include <stdio.h>

int main(void)
{
	// c = (f - 32) / 1.8

	float c = 0.0;
	float f = 27.0;

	c = (f - 32) / 1.8;

	printf("%f", c);

	return 0;

}
