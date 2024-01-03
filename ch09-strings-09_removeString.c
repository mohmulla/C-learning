// program that removes part of string in source string

#include <stdio.h>

int main(void)
{
	void removeString(char aString[], int from, int to);

	char string1[] = { "the mad hatter" };

	removeString(string1, 4, 7);

	printf("%s\n", string1);
	

	return 0;
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
