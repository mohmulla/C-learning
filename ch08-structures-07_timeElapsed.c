// program of to calculate time elapsed

#include <stdio.h>

struct time
{
	int hours;
	int minutes;
	int seconds;
};

int main(void)
{
	struct time time1, time2, result;

	struct time enterTime(void);
	struct time elapsedTime(struct time timeNow, struct time timeLater);


	// enter time
	time1 = enterTime();
	printf("\n");
	time2 = enterTime();

	//verify time
	printf("time1 = %.2i:%.2i:%.2i\n", time1.hours, time1.minutes, time1.seconds);
	printf("time2 = %.2i:%.2i:%.2i\n", time2.hours, time2.minutes, time2.seconds);
	printf("\n");

	// calculate Elapsed time
	result = elapsedTime(time1, time2);

	// print elapsed time
	printf("elapsed time = %.2i:%.2i:%.2i\n", result.hours, result.minutes, result.seconds);

	return 0;
}

struct time enterTime(void)
{
	struct time enteredTime;

	printf("enter time (hh:mm:ss) : ");

	scanf("%i:%i:%i", &enteredTime.hours, &enteredTime.minutes, &enteredTime.seconds);

	return enteredTime;
}

struct time elapsedTime(struct time timeNow, struct time timeLater)
{
	struct time elapsed;

	if (timeLater.seconds < timeNow.seconds)
	{
		timeLater.seconds = timeLater.seconds + 60;

		if (timeLater.minutes == 0)
		{
			timeLater.minutes = timeLater.minutes + 60;

			if (timeLater.hours == 0)
				timeLater.hours = 24;
			else
				--timeLater.hours;

		}
		else
		{
			--timeLater.minutes;
		}
		
	}

	elapsed.seconds = timeLater.seconds - timeNow.seconds;

	if (timeLater.minutes < timeNow.minutes)
	{
		timeLater.minutes = timeLater.minutes + 60;

		if (timeLater.hours == 0)
			timeLater.hours = 24;
		else
			--timeLater.hours;

	}

	elapsed.minutes = timeLater.minutes - timeNow.minutes;

	if (timeLater.hours < timeNow.hours)
	{
		timeLater.hours = timeLater.hours + 24;
	}

	elapsed.hours = timeLater.hours - timeNow.hours;

	return elapsed;

}
