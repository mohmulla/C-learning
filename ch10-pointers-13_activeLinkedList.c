// program of active linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
};

int list_is_active = 1;

int main(void)
{
	// functions protoypes
	char takeInput(void);
	struct entry* performAction(char anInput, struct entry* aList, struct entry* arrow);
	 
	
	// initialize list
	struct entry n1, n2, n3, n4;

	n1.value = 0;
	n1.next = &n2;

	n2.value = 0;
	n2.next = &n3;

	n3.value = 0;
	n3.next = &n4;

	n4.value = 0;
	n4.next = (struct entry*)0;

	struct entry* list = &n1;
	struct entry* listPointer = list;

	

	char theInput;

	while (list_is_active)
	{
		theInput = takeInput();

		printf("%c\n", theInput);

		listPointer = performAction(theInput, list, listPointer);
	}


	// while list is active
		// display list
		// take input on list
		// translate input to data
			// if ws move through the list
			// id d display the list
			// if x exit the program
		// perform action

	return 0;

}

char takeInput(void)
{
	char inputCharecter;

	printf("enter input: ");

	inputCharecter = getchar();

	return inputCharecter;
}

struct entry* performAction(char anInput, struct entry* aList, struct entry* arrow)
{
	void displayList(struct entry* aList);

	struct entry* listPointer = arrow;

	switch (anInput)
	{
	case 'd':
		displayList(aList);
		break;
	
	case 's':
		if (listPointer->next != 0)
			listPointer = listPointer->next;
		break;

	case '1':
		listPointer->value = 1;
		break;

	case 'x':
		list_is_active = 0;
		break;

	default:
		break;
	}

	return listPointer;
}

void displayList(struct entry* aList)
{
	struct entry* listTraverser = aList;

	while (listTraverser != 0)
	{
		printf("%i\n", listTraverser->value);
		listTraverser = listTraverser->next;
	}
}
