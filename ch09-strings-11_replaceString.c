// program that replaces a string with another

#include <stdio.h>

int main(void)
{
	void replaceString(char source[], char wordToBeReplaced[], char wordToBeReplacedWith[]);

	int findString(char sourceString[], char stringToFind[]);
	void removeString(char aString[], int from, int to);


	char string1[15] = { "the mad hatter" };


	printf("%s\n", string1);


	// exp space vvvvvv


	// exp space ^^^^^^


	replaceString(string1, "mad", "fat ");
	

	return 0;
}

void insertString(char source[], char aStringToBeInserted[], int place)
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

	source[j] = '\0';
	
	return;

}

int findString(char sourceString[], char stringToFind[])
{
	int stringLength(char aString[]);

	int i, j, k, index = -1;
	_Bool stringIsEqual = 0;

	for (i = 0; i < stringLength(sourceString); i++)
	{
		k = i;

		for (j = 0; stringToFind[j] != '\0'; j++)
		{

			if (stringToFind[j] == sourceString[k])
			{
				stringIsEqual = 1;
				k++;
			}
			else
			{
				stringIsEqual = 0;
				break;
			}

		}

		if (stringIsEqual && stringToFind[j] == '\0')
		{
			index = i;
			return index;
		}

	}

	return index;

}

void removeString(char aString[], int from, int to)
{

	int k = 0;

	for (int i = 0; aString[i] != '\0'; i++)
	{
		if (i >= from && i <= to)
			aString[i] = '0';
		else
			aString[i] = aString[i];
	}

	for (int j = 0; aString[j] != '\0'; j++)
	{
		if (aString[j] != '0')
		{
			aString[k] = aString[j];
			k++;
		}
	}

	aString[k] = '\0';

	return;
}

void replaceString(char source[], char wordToBeReplaced[], char wordToBeReplacedWith[])
{
	int findString(char sourceString[], char stringToFind[]);

	void removeString(char aString[], int from, int to);
	
	void insertString(char source[], char aStringToBeInserted[], int place);

	int stringLength(char aString[]);


	printf("source : %s\n", source);
	printf("word to be replaced: %s\n", wordToBeReplaced);


	// find location of insertion
	int locationOfInsertion = findString(source, wordToBeReplaced);

	printf("location of insertion %i\n", locationOfInsertion);


	// remove string
	int length = stringLength(wordToBeReplaced);
	removeString(source, locationOfInsertion, locationOfInsertion + length);

	printf("string after removal : %s\n", source);


	// insert string
	insertString(source, wordToBeReplacedWith, locationOfInsertion);

	printf("string after insertion : %s\n", source);


	return;

}

int stringLength(char aString[])
{
	int length = 0;
	int i = 0;

	while (aString[i] != '\0')
		i++;

	return i;

}
