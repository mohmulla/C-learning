// program that inserts entry into a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
};

int main(void)
{
	struct entry n1, n2, n3;

	n1.value = 10;
	n2.value = 20;
	n3.value = 30;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = (struct entry*)0;

	void insertEntry(struct entry* pointerToEntryToBeInserted, struct entry* pointerToInsertAfter);
	void printList(struct entry* pointerToList);


	// print the list
	printList(&n1);

	printf("\n-----\n");

	// define new entry
	struct entry n4;
	n4.value = 40;
	n4.next = (struct entry*)0;

	// insert entry
	insertEntry(&n4, &n1);

	// print the list
	printList(&n1);

	return 0;
}

void insertEntry(struct entry* pointerToEntryToBeInserted, struct entry* pointerToInsertAfter)
{
	pointerToEntryToBeInserted->next = pointerToInsertAfter->next;
	pointerToInsertAfter->next = pointerToEntryToBeInserted;
}

void printList(struct entry* pointerToList)
{
	struct entry* listTraverser = pointerToList;
	struct entry* listEnd = (struct entry*)0;

	while (listTraverser != listEnd)
	{
		printf("%i\n", listTraverser->value);
		listTraverser = listTraverser->next;
	}
}
