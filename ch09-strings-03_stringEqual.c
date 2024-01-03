// program to compare if strings are equal 

#include <stdio.h>

int main(void)
{
	char string1[] = { "hello" };
	char string2[] = { "hello" };


	_Bool stringsEqual(char stringA[], char stringB[]);
	_Bool areStringsEqual(char stringA[], char stringB[]);


	printf("strings equality status is %i\n", stringsEqual(string1, string2));
	printf("strings equality status is %i\n", areStringsEqual(string1, string2));
	
	return 0;

}

// book implemintation
_Bool stringsEqual(char stringA[], char stringB[])
{
	_Bool areEqual = 0;
	int i = 0;

	while (stringA[i] == stringB[i] && stringA[i] != '\0' && stringB[i] != '\0')
		i++;

	if (stringA[i] == '\0' && stringB[i] == '\0')
		areEqual = 1;
	else
		areEqual = 0;

	return areEqual;

}

// my implemintation
_Bool areStringsEqual(char stringA[], char stringB[])
{
	_Bool areEqual = 0;
	int i = 0;

	while (stringA[i] != '\0')
	{
		if (stringB[i] == '\0' || stringA[i] != stringB[i])
			areEqual = 0;

		if (stringA[i] == stringB[i])
			areEqual = 1;

		i++;
	}

	if (stringA[i] == '\0' && stringB[i] != '\0')
		areEqual = 0;

	return areEqual;
}
