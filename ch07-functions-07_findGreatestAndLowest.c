// program to find greatest and lowest number in array

#include <stdio.h>

int main(void)
{
	int array1[10] = { 68, 12, 101, 40, 37, 70, 0, 200, 178, 20 };
	int n = 10;

	int findGreatest(int array[10], int numberOfElements);
	int findLowest(int array[10], int numberOfElements);
	void printArray(int array[10], int numberOfElements);


	printArray(array1, n);

	printf("greatest: %i\n", findGreatest(array1, n));

	printf("lowest: %i\n", findLowest(array1, n));

	return 0;
	
}

int findGreatest(int array[10], int numberOfElements)
{
	int greatestNumber = array[0];

	for (int i = 1; i < numberOfElements; i++)
	{
		if (array[i] > greatestNumber)
			greatestNumber = array[i];
	}

	return greatestNumber;

}

int findLowest(int array[10], int numberOfElements)
{
	int lowestNumber = array[0];

	for (int i = 1; i < numberOfElements; i++)
	{
		if (array[i] < lowestNumber)
			lowestNumber = array[i];
	}

	return lowestNumber;
}

void printArray(int array[10], int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++)
		printf("%i ,", array[i]);

	printf("\n");

	return;
}
