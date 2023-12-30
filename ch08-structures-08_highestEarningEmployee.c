// program that compares 3 employees salary and returns highest salary employee

#include <stdio.h>

struct employee
{
	char name[3];
	int id[3];
	int salary;
};

int main(void)
{
	struct employee team[3];
	struct employee highestEarner;


	void printCompany(struct employee indeviduals[3], int numberOfIndeviduals);
	void printEmployee(struct employee indevidual);
	struct employee highestEarning(struct employee indeviduals[3], int numberOfIndeviduals);


	team[0].name[0] = 'm';
	team[0].name[1] = 'o';
	team[0].name[2] = 'h';
	team[0].id[0] = 0;
	team[0].id[1] = 0;
	team[0].id[2] = 1;
	team[0].salary = 5000;

	team[1].name[0] = 'a';
	team[1].name[1] = 'b';
	team[1].name[2] = 'd';
	team[1].id[0] = 0;
	team[1].id[1] = 0;
	team[1].id[2] = 2;
	team[1].salary = 6000;

	team[2].name[0] = 'o';
	team[2].name[1] = 's';
	team[2].name[2] = 'a';
	team[2].id[0] = 0;
	team[2].id[1] = 0;
	team[2].id[2] = 3;
	team[2].salary = 7000;


	printCompany(team, 3);

	highestEarner = highestEarning(team, 3);

	printf("highest earner is : ");

	for (int i = 0; i < 3; i++)
		printf("%c", highestEarner.name[i]);

	printf("\n");


	return 0;
}

void printCompany(struct employee indeviduals[3], int numberOfIndeviduals)
{

	void printEmployee(struct employee indevidual);

	for (int i = 0; i < numberOfIndeviduals; i++)
	{
		printEmployee(indeviduals[i]);
		printf("\n");
	}

	return;
}

void printEmployee(struct employee indevidual)
{
	// print name
	for (int i = 0; i < 3; i++)
		printf("%c", indevidual.name[i]);

	printf(" , ");

	// print id
	for (int i = 0; i < 3; i++)
		printf("%i", indevidual.id[i]);

	printf(" , ");

	// print salary
	printf("%i", indevidual.salary);

	return;
}

struct employee highestEarning(struct employee indeviduals[3], int numberOfIndeviduals)
{
	struct employee earner = indeviduals[0];

	for (int i = 0; i < numberOfIndeviduals; i++)
	{
		if (earner.salary < indeviduals[i].salary)
			earner = indeviduals[i];
	}

	return earner;

}
