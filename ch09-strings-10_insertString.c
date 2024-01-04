// program that inserts a string into source string

#include <stdio.h>

int main(void)
{
	void insertString(char source[], const char aStringToBeInserted[], int place);

	char string1[15] = { "the hatter" };

	insertString(string1, "mad ", 4);

	printf("%s\n", string1);
	

	return 0;
}

void insertString(char source[], const char aStringToBeInserted[], int place)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	char sourceCopy[15];

	// make copy of source
	for (i = 0; i < 15; i++)
		sourceCopy[i] = source[i];

	// copy string up to place into source
	for ( i = 0; i < place; i++)
	{
		source[i] = sourceCopy[i];
	}
	
	// copy stringToBeInserted into source
	for (k = i; aStringToBeInserted[l] != '\0'; k++)
	{
		source[k] = aStringToBeInserted[l];
		l++;
	}

	// continue copying source from where we stopped
	for (j = k; sourceCopy[i] != '\0' ; i++)
	{
		source[j] = sourceCopy[i];
		j++;
	}
	
	return;

}
