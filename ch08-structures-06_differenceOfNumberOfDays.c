// program of to calculate number of days

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main(void)
{
	struct date date1;
	struct date date2 = { 1,1,1 };
	long int N1, N2;
	int numberOfDays;

	struct date takeDate(void);
	long int calculateN(struct date aDate);

	// take date1
	date1 = takeDate();

	// verfify date
	printf("date1 is : %.2i/%.2i/%.4i\n", date1.day, date1.month, date1.year);

	// take date2
	date2 = takeDate();

	// verfify date
	printf("date1 is : %.2i/%.2i/%.4i\n", date2.day, date2.month, date2.year);

	// calculate N1
	N1 = calculateN(date1);

	printf("N1 = %li\n", N1);

	// calculate N2
	N2 = calculateN(date2);

	printf("N1 = %li\n", N2);

	// find the difference of N1 - N2
	numberOfDays = N1 - N2;

	printf("number of days = %i\n", numberOfDays);
}

struct date takeDate(void)
{
	struct date enteredDate;

	printf("enter date (dd/mm,yyyy): ");

	scanf("%i/%i/%i", &enteredDate.day, &enteredDate.month, &enteredDate.year);

	return enteredDate;
}

long int calculateN(struct date aDate)
{
	int f(int year, int month);
	int g(int month);

	return 1461 * f(aDate.year, aDate.month) / 4 + 153 * g(aDate.month) / 5 + aDate.day;
}

int f(int year, int month)
{
	if (month <= 2)
		return year - 1;
	else
		return year;
}

int g(int month)
{
	if (month <= 2)
		return month + 13;
	else
		return month + 1;
}
