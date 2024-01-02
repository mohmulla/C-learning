// program that defines strings

#include <stdio.h>

int main(void)
{

	void printArray(char anArray[5], int arrayLength);
	void printString(char anArray[]);


	// PART 1
	// a charecter string is an array of consecutive charecters 
	char string1[5] = { 'h', 'e', 'l', 'l', 'o' };
	int string1Length = 5;


	printf("string 1 : ");
	printArray(string1, string1Length);
	//
	// *** endOF PART 1


	printf("\n");


	// PART 2
	// as a convention, we terminate a charecter string with '\0' as means with dealing with unidentified array length
	char string2[6] = { 'w', 'o', 'r', 'l', 'd', '\0'};


	printf("string 2 : ");
	printString(string2);
	//
	// *** endOF PART 2


	printf("\n");


	// PART 3
	// REMEMBER : space must be equivalently reserved for the ENTIRE string
	char string3[12] = { 'h','e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0' };


	printf("string 3 : ");
	printString(string3);
	//
	// *** endOF PART 3


	printf("\n");

	// PART 4
	// SPECIAL CASE : the size of the string(charecter array) can be ommitted and left for the compiler to figure out IF
	//				  we initialize the string WITH constant CONSTANT string
	char string4[] = { "hello World!" };


	printf("string 4 : ");
	printString(string4);
	//
	// *** endOF PART 4


	printf("\n\a");



	return 0;
}

void printArray(char anArray[5], int arrayLength)
{
	for (int i = 0; i < arrayLength; i++)
	{
		printf("%c", anArray[i]);
	}

	return;
}

void printString(char anArray[])
{
	for (int i = 0; anArray[i] != '\0'; i++)
	{
		printf("%c", anArray[i]);
	}

	return;
}
