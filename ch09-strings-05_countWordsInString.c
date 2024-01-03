// program to count words in a string

#include <stdio.h>

int main(void)
{

	char string1[] = { "hello hello san francisco the city of slopes" };

	int countWords(char aString[]);


	printf("%s\n", string1);
	printf("word count is %i\n", countWords(string1));


	return 0;

}

int countWords(char aString[])
{
	_Bool alphabetic(char c);

	int wordCount = 0;
	int i = 0;
	_Bool lookingForWord = 1;

	while (aString[i] != '\0')
	{
		if (alphabetic(aString[i]) && lookingForWord)
		{
			wordCount++;
			lookingForWord = 0;
		}

		if (!alphabetic(aString[i]))
			lookingForWord = 1;

		++i;
	}

	return wordCount;
}

_Bool alphabetic(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
