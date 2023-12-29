// program of passing structure as argument

#include <stdio.h>

struct position
{
	int x;
	int y;
	int z;
};

int main(void)
{
	
	struct position position1 = { 1,1,1 };

	void printStructure(struct position p);


	printStructure(position1);
	
	return 0;
}

void printStructure(struct position p)
{
	printf("%i, %i, %i\n", p.x, p.y, p.z);

	return;
}
