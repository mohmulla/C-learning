// program that prints mario

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j != i; j--)
			printf(" ");
		
		for (int k = 0; k < i; k++)
			printf("#");

		printf("   ");

		for (int l = 0; l < i; l++)
			printf("#");
		
		printf("\n");
	}
}
