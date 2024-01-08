// program of summing array elements using pointers

#include <stdio.h>

int main(void)
{
	int array1[5];
	int sum;
	int* pointerToArray1 = array1;

	void enterElements(int anArray[], int numberOfElements);
	int sumElements(int* pointerToArray, int numberOfElements);

	enterElements(array1, 5);

	sum = sumElements(pointerToArray1, 5);

	printf("sum is %i\n", sum);

	return 0;
}

void enterElements(int anArray[], int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++)
	{
		scanf("%i", &anArray[i]);
	}
}

int sumElements(int* pointerToArray, int numberOfElements)
{
	int sum = 0; 

	for (int i = 0; i < numberOfElements; i++)
	{
		sum = sum + (*(pointerToArray + i));
	}

	return sum;
}
