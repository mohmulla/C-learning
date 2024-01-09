// program that copies an array using pointers

#include <stdio.h>

int main(void)
{
	char text[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' ,'\0'};
	char* pointerToText = text;

	char textCopied[50];
	char* pointerToCopiedText = textCopied;

	void copyString(char* from, char* to);


	copyString(text, textCopied);

	printf("%s", textCopied);


	return 0;
}

void copyString(char* from, char* to)
{
	for (; *from != '\0'; ++from, ++to)
		*to = *from;

	*to = '\0';
}
