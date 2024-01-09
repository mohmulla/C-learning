// program that prints an array using pointers

#include <stdio.h>

int main(void)
{
	char text[11] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
	char* pointerToText = text;

	void printArray(char* pointerToArray, int numberOfElements);

	printArray(pointerToText, 11);

	return 0;
}

void printArray(char* pointerToArray, int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++)
		printf("%c", *(pointerToArray + i));
}
