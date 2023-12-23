// program that calculates factorial

#include <stdio.h>

int main(void)
{
	int n;
	int factorial = 1;
	int result = 1;

	printf("enter a number of factorial: ");
	scanf("%i", &factorial);

	for(n = 1; n < factorial; n++)
	{
		result = n * result;
	}

	printf("%i! = %i\n", factorial, result);

	return 0;
}
