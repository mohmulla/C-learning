// program to perform mulitple operations on strings. And concatenate strings of unspecified length 

#include <stdio.h>

int main(void)
{
	char string1[] = { "hello " };
	char string2[] = { "its me" };
	char string3[] = { "I was wondering if after all these years you\'d like to meet" };
	char string4[81];

	int charectersInString(char aString[]);
	void concatinateStrings(char stringA[], char stringB[], char destination[]);


	printf("%s", string1);
	printf("number of charecters %i\n", charectersInString(string1));

	printf("%s", string2);
	printf("number of charecters %i\n", charectersInString(string2));

	printf("%s", string3);
	printf("number of charecters %i\n", charectersInString(string3));


	concatinateStrings(string1, string2, string4);

	printf("%s\n", string4);


	return 0;

}

int charectersInString(char aString[])
{
	int numberOfCharecters = 0;

	for (int i = 0; aString[i] != '\0'; i++)
	{
		numberOfCharecters++;
	}

	return numberOfCharecters;

}

void concatinateStrings(char stringA[], char stringB[], char destination[])
{
	int charectersInString(char aString[]);

	int LengthOfStringA = charectersInString(stringA);
	int LengthOfStringB = charectersInString(stringB);

	int i, j;

	for ( i = 0; i < LengthOfStringA; i++)
	{
		destination[i] = stringA[i];
	}

	for (j = 0; j < LengthOfStringB; j++)
		destination[i + j] = stringB[j];

	destination[i + j] = '\0';

	return;

}
