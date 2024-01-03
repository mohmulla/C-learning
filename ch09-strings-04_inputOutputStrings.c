// program to input output strings 

#include <stdio.h>

int main(void)
{
	char string1[81];
	char string2[81];

	void inputString(char aString[], int stringLength);
	void outputString(char aString[], int StringLength);


	// PART 1 : using printf/scanf
	// 
	// input string
	printf("input string1 : ");
	scanf("%s", string1);

	// output string
	printf("%s", string1);

	//
	// *** endOF PART 1


	printf("\n");


	// PART 2 : using my implemintation
	//
	// input string
	printf("input string2 : ");
	inputString(string2, 81);

	// output string
	outputString(string2, 81);

	//
	// *** endOF PART 2


	printf("\n");


	return 0;

}

void inputString(char aString[], int stringLength)
{
	int i = 0;
	char charecter;

	while (i < stringLength)
	{
		charecter = getchar();
		aString[i] = charecter;

		if (aString[0] == '\n')
		{
			charecter = getchar();
			aString[i] = charecter;
		}

		if (aString[i] == '\n')
			break;

		i++;
	}

	aString[i] = '\0';

	return;

}

void outputString(char aString[], int stringLength)
{
	int i = 0;

	while (aString[i] != '\0' && i < stringLength)
	{
		printf("%c", aString[i]);
		i++;
	}

	return;
}
