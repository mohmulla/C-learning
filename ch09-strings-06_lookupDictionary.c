// program to find a word in a dictionary

#include <stdio.h>

struct entry
{
	char word[15];
	char definetion[50];
};

int main(void)
{

	int lookUpWord(char aWord[] , struct entry book[]);

	int entryNumber;

	struct entry dictionary[10] = { { "apple", "a red fruit" },
									{ "beer", "a malt extract beverage" },
									{ "cat", "a feline animal" },
									{ "door", "object to enter a room" },
									{ "electricty", "type of energy" },
										{ "force", "energy applied to mass give it acceleration" },
										{ "goal", "a destination for achievement" },
										{ "hose", "a kind of elastic tube" },
										{ "integer", "a number without decimal point" },
										{ "jug", "a big cup" } };
	char word[10];
	
	printf("enter a word : ");
	scanf("%s", word);


	printf("\n");


	entryNumber = lookUpWord(word, dictionary);
	
	if (entryNumber != -1)
		printf("the meaning : %s\n", dictionary[entryNumber].definetion);
	else
		printf("%s has no meaning", word);

	printf("\n");


	return 0;

}

int lookUpWord(char aWord[], struct entry book[])
{
	_Bool stringsEqual(char stringA[], char stringB[]);
	int i;

	
	for ( i = 0; i < 10; i++)
	{
		if (stringsEqual(aWord, book[i].word))
			return i;
	}

	return -1;

}

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
