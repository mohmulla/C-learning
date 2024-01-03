// program that finds string in source string

#include <stdio.h>

int main(void)
{
	int findString(char sourceString[], char stringToFind[]);

	char string1[] = { "chatterbox" };
	char string2[] = { "x" };

	int location;

	location = findString(string1, string2);

	printf("%s is in location %i of %s\n", string2, location, string1);

	return 0;
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

int stringLength(char aString[])
{
	int i = 0;

	while (aString[i] != '\0')
		i++;

	return i + 1;

}
