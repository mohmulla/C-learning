// program that works with pointers to structures

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main(void)
{
	struct date todaysDate;
	struct date* pDate;

	pDate = &todaysDate;


	(*pDate).day = 7;

	(*pDate).month = 1;

	pDate->year = 2024;


	printf("today's date is %i/%i/%i\n", (*pDate).day, pDate->month, pDate->year);

	return 0;
}
