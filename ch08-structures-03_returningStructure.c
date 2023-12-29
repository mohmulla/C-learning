// program of returning struct of passed struct argument

#include <stdio.h>

struct position
{
	int x;
	int y;
	int z;
};

int main(void)
{
	struct position p1 = { 0,0,0 };
	struct position p2;

	void printStructure(struct position p);
	struct position incrementStructure(struct position p);


	printStructure(p1);

	p2 = incrementStructure(p1);

	printStructure(p2);

	return 0;

}

void printStructure(struct position p)
{
	printf("structure is : %i, %i, %i\n", p.x, p.y, p.z);

	return;
}

struct position incrementStructure(struct position p)
{
	p.x = p.x + 1;
	p.y = p.y + 1;
	p.z = p.z + 1;

	return p;
}
