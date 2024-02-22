// program of a macro that gives the minimum of two values

#include <stdio.h>


#define IS_UPPER_CASE(c)	c >= 'A' && c <= 'Z'




int main()
{

	char charecter = 'm';


	if (IS_UPPER_CASE(charecter))
		printf("%c is upper case\n", charecter);
	else
		printf("%c is NOT upper case or even a letter\n", charecter);


	return 0;

}
