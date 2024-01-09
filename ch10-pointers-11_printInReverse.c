// program that prints lists in order and in reverse

#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
	struct entry* previous;
};

int main(void)
{
	struct entry n1, n2, n3, n4;

	n1.value = 10;
	n2.value = 20;
	n3.value = 30;
	n4.value = 40;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = (struct entry*)0;

	n1.previous = (struct entry*)0;
	n2.previous = &n1;
	n3.previous = &n2;
	n4.previous = &n3;

	void printListInOrder(struct entry* pointerToHeadOfTheList);
	void printListInReverse(struct entry* pointerToTailOfTheList);

	
	// print list in order
	printListInOrder(&n1);
	
	printf("\n-----\n");

	printListInReverse(&n4);

	return 0;
}

void printListInOrder(struct entry* pointerToHeadOfTheList)
{
	struct entry* listTraverser = pointerToHeadOfTheList;
	struct entry* listEnd = (struct entry*)0;

	while (listTraverser != listEnd)
	{
		printf("%i\n", listTraverser->value);
		listTraverser = listTraverser->next;
	}
}

void printListInReverse(struct entry* pointerToTailOfTheList)
{
	struct entry* listTraverser = pointerToTailOfTheList;
	struct entry* listEnd = (struct entry*)0;

	while (listTraverser != listEnd)
	{
		printf("%i\n", listTraverser->value);
		listTraverser = listTraverser->previous;
	}
}
