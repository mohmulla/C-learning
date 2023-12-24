// program of set based calculator

#include <stdio.h>

int main(void)
{
	_Bool isCalculating = 1;
	_Bool isWithenCalculation = 1;

	float valueSet;
	float valueOperated;

	char operator;

	// entering main loop of setting a value
	while (isCalculating)
	{
		// ask to set a value
		printf("set value and s:\n");

		scanf("%f %c", &valueSet, &operator);

		printf("\n");

		if (operator == 's')
		{
			isWithenCalculation = 1;

			// calculating upon set value
			while (isWithenCalculation)
			{
				printf("enter value and operator(+,-,*,/) or e to end set:\n");

				scanf("%f %c", &valueOperated, &operator);



				// calculation
				if (operator == 'e')
				{
					isWithenCalculation = 0;
					printf("total is %.2f\n", valueSet);
					operator = 'n';
				}
				else if (operator == '+')
				{
					valueSet = valueSet + valueOperated;
					printf("%.2f\n", valueSet);
				}
				else if (operator == '-')
				{
					valueSet = valueSet - valueOperated;
					printf("%.2f\n", valueSet);
				}
				else if (operator == '*')
				{
					valueSet = valueSet * valueOperated;
					printf("%.2f\n", valueSet);
				}
				else if (operator == '/')
				{
					if (valueOperated == 0)
					{
						valueOperated = 1;
					}
					valueSet = valueSet - valueOperated;
					printf("%.2f\n", valueSet);
				}
				else
				{
					printf("wrong operator!\ntry again from start:\n");
					isWithenCalculation = 0;
				}
			}
		}
		
		if (operator == 'e')
		{
			printf("end of calculation\n");
			isCalculating = 0;
		}
	}

	return 0;

}
