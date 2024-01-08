// program that prints an array in reverse using pointers

#include <stdio.h>

int main(void)
{
	char text[11] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
	char* pointerToText = text;

	void printInReverse(char* pointerToArray, int numberOfElements);

	printInReverse(pointerToText, 11);

	return 0;
}

void printInReverse(char* pointerToArray, int numberOfElements)
{
	for (int i = numberOfElements - 1; i > -1; i--)
		printf("%c", *(pointerToArray + i));
}
