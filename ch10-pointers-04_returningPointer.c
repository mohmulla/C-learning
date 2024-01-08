// program of a pointer returning function

#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
};

int main(void)
{
	struct entry* findValue(struct entry* lister, int searchedValue);

	struct entry n1, n2, n3;
	struct entry* listTraverser;
	struct entry* listHead = &n1;
	struct entry* listEnd = (struct entry*)0;

	listTraverser = listHead;

	n1.value = 10;
	n2.value = 20;
	n3.value = 30;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = listEnd;

	listTraverser = findValue(listHead, 30);

	if (listTraverser != 0)
		printf("value %i found\n", listTraverser->value);
	else
		printf("value %i NOT found", listTraverser->value);

	
	return 0;
}

struct entry* findValue(struct entry* lister, int searchedValue)
{
	while (lister != 0)
	{
		if (lister->value == searchedValue)
			return lister;
		else
			lister = lister->next;
	}

	return 0;
}
