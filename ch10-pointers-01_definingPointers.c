// program that defines pointers

#include <stdio.h>

int main(void)
{
	int x = 30;
	int *px = &x;

	printf("%i\n", *px);

	*px = 40;

	printf("%i\n", x);

	printf("%i\n", px);
	

	return 0;
}
