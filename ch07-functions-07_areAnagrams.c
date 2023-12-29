// program to find if two charecter arrays are anagrams (equal in letters)

#include <stdio.h>

int main(void)
{
	char word1[5] = { 'p', 'e', 'a', 'r', 's' };
	int word1Length = 5;
	char word2[5] = { 's', 'p', 'e', 'a', 'r' };
	int word2Length = 5;

	void areAnagrams(char array1[5], int length1, char array2[5], int length2);

	areAnagrams(word1, word1Length, word2, word2Length);

	return 0;
}

void areAnagrams(char array1[5], int length1, char array2[5], int length2)
{
	_Bool isAvailable = 0;

	// check if words are of same length
	if (length1 != length2)
	{
		printf("words are NOT anagrams\n");
		return;
	}

	// check for charecter of word1 is in word2
	for (int i = 0; i < length1; i++)
	{
		isAvailable = 1;

		for (int j = 0; j < length2; j++)
		{
			if (array1[i] == array2[j])
			{
				isAvailable = 1;
				break;
			}
			else
			{
				isAvailable = 0;
			}
		}

		if (isAvailable == 0)
		{
			printf("word1 and word2 are NOT anagrams\n");
			return;
		}

	}

	printf(" words are anagrams\n");

	return;

}
