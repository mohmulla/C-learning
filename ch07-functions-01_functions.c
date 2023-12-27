// program that works with functions

#include <stdio.h>

int main(void)
{
	int array1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int n = 10;
	int result = 0;

	// function prototype declaretion
	void printHello(void);
	void printDigit(int number);
	int returnDigit(int number);
	int incrementDigit(int number);
	void printArray(int array[10], int numberOfElements);


	printHello();

	printf("\n");

	printDigit(result);

	printf("\n");

	result = incrementDigit(result);
	printDigit( returnDigit(result) );

	printf("\n");

	printArray(array1, n);

	printf("\n");

	return 0;
	

}

void printHello(void)
{
	printf("hello");

	return;
}

void printDigit(int number)
{
	printf("%i", number);

	return;
}

int returnDigit(int number)
{
	return number;
}

int incrementDigit(int number)
{
	return ++number;
}

void printArray(int array[10], int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++)
		printf("%i , ", array[i]);

	return;
}
