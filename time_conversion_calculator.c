#include <stdio.h> 

#define MIN_PER_HOUR 60
//converting min to hours and remaining minutes

int main(void)
{
	int min;
	int hours;
	int rem_min;
 
	printf("Enter minutes (<= 0 to quit): ");
  scanf("%d", &min);

	while(0 < min) //loop runs only if the user enter a positive number of min
	{
    hours = min / MIN_PER_HOUR; //converts min to hours
    rem_min = min % MIN_PER_HOUR; /*uses modulus to get the remaining minutes*/
    
   	printf("%d hours, %d minutes\n",hours, rem_min);
    
		printf("Enter minutes (<=0 to quit): "); //asks the user for the next value so the while loop can repeat
    scanf("%d", &min);
	}

	printf("Program terminated.\n"); //this is excecuted when user types 0

	return 0;
 }
