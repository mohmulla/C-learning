// program of a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
};

int main(void)
{
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

	while (listTraverser != listEnd)
	{
		printf("%i\n", listTraverser->value);
		listTraverser = listTraverser->next;
	}

	return 0;
}
