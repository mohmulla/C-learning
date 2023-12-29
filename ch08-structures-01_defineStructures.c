// program to define a structure

#include <stdio.h>

int main(void)
{
	struct position
	{
		int x;
		int y;
		int z;
	};

	struct position position1;
	position1.x = 1;
	position1.y = 1;
	position1.z = 1;

	struct position position2 = { 2,2,2 };

	printf("position1 = %i, %i, %i\n", position1.x, position1.y, position1.z);
	printf("position2 = %i, %i, %i\n", position2.x, position2.y, position2.z);

	return 0;
}
