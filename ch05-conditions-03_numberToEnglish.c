// program that spells numbers in english WITHOUT arrays

#include <stdio.h>

int main(void)
{
	int fullNumber;
	int number;
	int temp;
	int exponent = 0;
	int numberExponented = 1;

	// take input
	printf("enter a number to be spelled in english: ");
	scanf("%i", &fullNumber);

	// spell number until full number == 0
	do 
	{

		//printf("\n");

		// asign fullNumber to number
		number = fullNumber;
		//printf("number = %i\n", number);

		// reset exponent
		exponent = 0;

		// iterate over all digits in number
		while (number > 0)
		{
			// take out number
			temp = number % 10;
			//printf("temp = %i\n", temp);
			
			// subtract from number
			number = number - temp;
			//printf("number - temp = %i\n", number);

			// devide number by 10
			number = number / 10;
			//printf("number / 10 = %i\n", number);
			
			// spell number
			if (number == 0)
			{
				switch (temp)
				{
				case 1:
					printf("one \n");
					break;
					
				case 2:
					printf("two \n");
					break;

				case 3:
					printf("three \n");
					break;
				case 4:
					printf("four \n");
					break;
				case 5:
					printf("five \n");
					break;
				case 6:
					printf("six \n");
					break;
				case 7:
					printf("seven \n");
					break;
				case 8:
					printf("eight \n");
					break;
				case 9:
					printf("nine \n");
					break;
				case 0:
					printf("zero \n");
					break;

				}
			}

			// increment exponent
			exponent++;

		}

		// assign temp to numberExponented
		numberExponented = temp;
		//printf("numberExp = %i\n", numberExponented);

		
		// find power
		for (int i = 1; i < exponent; i++)
			numberExponented = numberExponented * 10;
		//printf("numberExp = %i\n", numberExponented);

		// subtract numberExponented from fullNumber
		fullNumber = fullNumber - numberExponented;
		//printf("fullnumber = %i\n", fullNumber);
		
		

	} while ( fullNumber > 0);


	return 0;

}
