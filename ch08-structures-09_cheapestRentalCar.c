// program that compares 4 cars rental rates and returns lowest price for number of days

#include <stdio.h>

struct car
{
	int modelNumber[4];
	char type[4];
	int rentalPrice;
};

int main(void)
{
	struct car fleet[4];
	struct car cheapestCar;
	int rentalDays;
	int totalCost;


	void printShowroom(struct car assortments[4], int numberOfCars);
	struct car findCheapestCar(struct car assortments[4], int numberOfCars);

	void printModelNumber(struct car aCar);
	void printCarType(struct car aCar);
	void printRentalPrice(struct car aCar);


	// data
	fleet[0].modelNumber[0] = 0;
	fleet[0].modelNumber[1] = 0;
	fleet[0].modelNumber[2] = 0;
	fleet[0].modelNumber[3] = 1;
	fleet[0].type[0] = 't';
	fleet[0].type[1] = 'o';
	fleet[0].type[2] = 'y';
	fleet[0].type[3] = 'o';
	fleet[0].rentalPrice = 80;

	fleet[1].modelNumber[0] = 0;
	fleet[1].modelNumber[1] = 0;
	fleet[1].modelNumber[2] = 0;
	fleet[1].modelNumber[3] = 2;
	fleet[1].type[0] = 'c';
	fleet[1].type[1] = 'h';
	fleet[1].type[2] = 'e';
	fleet[1].type[3] = 'v';
	fleet[1].rentalPrice = 150;

	fleet[2].modelNumber[0] = 0;
	fleet[2].modelNumber[1] = 0;
	fleet[2].modelNumber[2] = 0;
	fleet[2].modelNumber[3] = 3;
	fleet[2].type[0] = 'j';
	fleet[2].type[1] = 'e';
	fleet[2].type[2] = 'e';
	fleet[2].type[3] = 'p';
	fleet[2].rentalPrice = 90;

	fleet[3].modelNumber[0] = 0;
	fleet[3].modelNumber[1] = 0;
	fleet[3].modelNumber[2] = 0;
	fleet[3].modelNumber[3] = 4;
	fleet[3].type[0] = 's';
	fleet[3].type[1] = 'h';
	fleet[3].type[2] = 'a';
	fleet[3].type[3] = 'n';
	fleet[3].rentalPrice = 50;




	// print showroom
	printShowroom(fleet, 4);
	printf("\n");

	// enter number of days
	printf("enter number of days: ");
	scanf("%i", &rentalDays);

	// find cheapest car
	cheapestCar = findCheapestCar(fleet, 4);

	// find how much it costs for number of rental days
	totalCost = rentalDays * cheapestCar.rentalPrice;

	// print cheapest car
	printf("cheapest car is : ");
	printCarType(cheapestCar);
	printf(" model number#");
	printModelNumber(cheapestCar);
	printf("for %i days = %i ", rentalDays, totalCost);
	printf(" at %i $/d\n", cheapestCar.rentalPrice);


	return 0;

}

void printShowroom(struct car assortments[4], int numberOfCars)
{
	void printModelNumber(struct car aCar);
	void printCarType(struct car aCar);
	void printRentalPrice(struct car aCar);

	printf("showroom is :\n");

	for (int i = 0; i < numberOfCars; i++)
	{
		printModelNumber(assortments[i]);
		printf(" , ");
		printCarType(assortments[i]);
		printf(" , ");
		printRentalPrice(assortments[i]);
		printf("\n");
	}

	return;

}

void printModelNumber(struct car aCar)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%i ", aCar.modelNumber[i]);
	}

	return;
}

void printCarType(struct car aCar)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%c", aCar.type[i]);
	}

	printf(" ");

	return;
}

void printRentalPrice(struct car aCar)
{
	printf("%i", aCar.rentalPrice);

	return;
}

struct car findCheapestCar(struct car assortments[4], int numberOfCars)
{
	struct car cheapestCar = assortments[0];

	for (int i = 0; i < numberOfCars; i++)
	{
		if (cheapestCar.rentalPrice > assortments[i].rentalPrice)
			cheapestCar = assortments[i];
	}

	return cheapestCar;
}
