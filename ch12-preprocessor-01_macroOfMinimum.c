// program of a macro that gives the minimum of two values

#include <stdio.h>


#define MIN(a,b)	a < b




int main()
{

	int firstNumber = 15;
	int secondNumber = 9;


	if (MIN(firstNumber, secondNumber))
	{
		printf("%i is less than %i", firstNumber, secondNumber);
	}
	else
	{
		printf("%i is less than %i", secondNumber, firstNumber);
	}


	return 0;

}
