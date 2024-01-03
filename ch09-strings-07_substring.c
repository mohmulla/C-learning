// program to extarct a substing from string

#include <stdio.h>

int main(void)
{
	void substring(char source[], int start, int length, char result[]);

	char wordEntered[15];
	char extractedWord[15];

	int extractionStart, extractionLength;


	printf("enter a word : ");
	scanf("%s", wordEntered);

	printf("from : ");
	scanf("%i", &extractionStart);

	printf("to : ");
	scanf("%i", &extractionLength);

	substring(wordEntered, extractionStart, extractionLength, extractedWord);

	printf("substring is : %s\n", extractedWord);


	return 0;

}

void substring(char source[], int start, int length, char result[])
{
	int index;

	int i = start;

	if (i > 13)
		i = 13;

	for ( index = 0; index < length && source[index] != '\0'; index++)
	{
		result[index] = source[index + i];
	}

	result[index] = '\0';

	return;

}
