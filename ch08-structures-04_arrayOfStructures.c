// program of array of structures

#include <stdio.h>

struct time
{
	int hours;
	int minutes;
	int seconds;
};

int main(void)
{
	struct time testTimes[3] = { {12,0,0}, {12,59,59}, {1,29,29} };

	void printTimes(struct time array[3], int iterations);
	struct time timeUpdate(struct time t);
	void incrementTimes(struct time timesArray[3], int iterations);


	printTimes(testTimes, 3);
	
	printf("incremented times are:\n");

	incrementTimes(testTimes, 3);

	printTimes(testTimes, 3);

	return 0;
}

void printTimes(struct time array[3], int iterations)
{
	for (int i = 0; i < iterations; i++)
	{
		printf("time %i is %.2i:%.2i:%.2i\n", i, array[i].hours, array[i].minutes, array[i].seconds);
	}

	return;
}

struct time timeUpdate(struct time t)
{
	++(t.seconds);

	if (t.seconds == 60)
	{
		t.seconds = 0;
		++(t.minutes);

		if (t.minutes == 60)
		{
			t.minutes = 0;
			++(t.hours);

			if (t.hours == 24)
			{
				t.hours = 0;
			}
		}
	}

	return t;
}

void incrementTimes(struct time timesArray[3], int iterations)
{
	struct time timeUpdate(struct time t);

	for (int i = 0; i < iterations; i++)
		timesArray[i] = timeUpdate(timesArray[i]);

	return;
}
