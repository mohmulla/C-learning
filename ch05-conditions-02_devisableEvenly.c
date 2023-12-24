// program that checks 2 entered numbers if the first is evenly devisable by the second

#include <stdio.h>

int main(void)
{
	int value1 = 0;
	int value2 = 0;

	// take input
	printf("enter first value: ");
	scanf("%i", &value1);
	printf("\n");

	printf("enter second value: ");
	scanf("%i", &value2);
	printf("\n");

	// check if v1 is evenly devisable by v2
	if ((value1 % value2) == 0)
		printf("%i is evenly devisble by %i\n", value1, value2);
	else
		printf("%i is NOT evenly devisable by %i\n", value1, value2);

	return 0;

}
