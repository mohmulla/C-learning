// program that copys array1 into array2

#include <stdio.h>

int main(void)
{

	int array1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int array2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	
	// print array1
	for (int i = 0; i < 10; i++)
		printf("%i , ", array1[i]);

	printf("\n");

	// print array2
	for (int i = 0; i < 10; i++)
		printf("%i , ", array2[i]);

	printf("\n");

	// copy array1 into array2
	for (int i = 0; i < 10; i++)
		array2[i] = array1[i];

	printf("\n");

	// print array1
	for (int i = 0; i < 10; i++)
		printf("%i , ", array1[i]);

	printf("\n");

	// print array2
	for (int i = 0; i < 10; i++)
		printf("%i , ", array2[i]);

	printf("\n");

	return 0;

}
