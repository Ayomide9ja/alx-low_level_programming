#include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d\n is positive\n", i);
	
	else if (i < 0)	
		printf("%d\n is negative\n", i);

	else 
		printf("%d\n is zero\n", i);
}	
