// program of structure of structures

#include <stdio.h>

struct time
{
	int hours;
	int minutes;
	int seconds;
};

struct times
{
	struct time time1;
	struct time time2;
};

int main(void)
{
	struct times givenTwoTimes = { {12,12,12 }, {13,13,13} };
	struct times copyOfTwoTimes;

	void printTimes(struct times theTimes);
	struct times copyTime(struct times aTime);


	copyOfTwoTimes.time1.hours = 14;
	copyOfTwoTimes.time1.minutes = 14;
	copyOfTwoTimes.time1.seconds = 14;
	copyOfTwoTimes.time2.hours = 15;
	copyOfTwoTimes.time2.minutes = 15;
	copyOfTwoTimes.time2.seconds = 15;


	// print times
	printf("times before copy:\n");
	printTimes(givenTwoTimes);
	printf("\n");
	printTimes(copyOfTwoTimes);

	// copy givenTwoTimes INTO copyOfTwoTimes
	copyOfTwoTimes = copyTime(givenTwoTimes);

	// print times
	printf("times after copy:\n");
	printTimes(givenTwoTimes);
	printf("\n");
	printTimes(copyOfTwoTimes);

	return 0;
}

void printTimes(struct times theTimes)
{
	printf("time1 : %.2i:%.2i:%.2i\n", theTimes.time1.hours, theTimes.time1.minutes, theTimes.time1.seconds);
	printf("time2 : %.2i:%.2i:%.2i\n", theTimes.time2.hours, theTimes.time2.minutes, theTimes.time2.seconds);

	return;

}

struct times copyTime(struct times aTime)
{
	struct times timeToBeReturned;

	timeToBeReturned.time1.hours = aTime.time1.hours;
	timeToBeReturned.time1.minutes = aTime.time1.minutes;
	timeToBeReturned.time1.seconds = aTime.time1.seconds;

	timeToBeReturned.time2.hours = aTime.time2.hours;
	timeToBeReturned.time2.minutes = aTime.time2.minutes;
	timeToBeReturned.time2.seconds = aTime.time2.seconds;

	return timeToBeReturned;
}
