// program that calculates values of n^2

#include <stdio.h>

int main(void)
{
	int n;

	printf("table of n and n^2\n");
	printf("n     n^2\n");
	printf("-     ---\n");

	for(n = 1; n < 11; n++)
	{
		printf("%2i     %i\n", n, n*n);
	}

	return 0;
}
