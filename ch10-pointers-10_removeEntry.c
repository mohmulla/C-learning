// program that removes entry from a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
};

int main(void)
{
	struct entry n1, n2, n3,n4;

	n1.value = 10;
	n2.value = 20;
	n3.value = 30;
	n4.value = 40;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = (struct entry*)0;

	void printList(struct entry* pointerToList);
	void removeEntry(struct entry* removeAfter);


	// print the list
	printList(&n1);

	printf("\n-----\n");


	// remove entry
	removeEntry(&n1);

	printList(&n1);

	

	return 0;
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

void removeEntry(struct entry* removeAfter)
{
	removeAfter->next = (removeAfter->next)->next;
}
