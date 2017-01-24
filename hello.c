#include <stdio.h>

int main()
{
	int i;
	int number = 0;
	int sum = 0;
	int average = 0;
	
	printf("Hello World\n");
	printf("Fare thee well!\n");
	printf("Quicker version!\n");
	
	for(i=0; i<5; i++) 
	{
		printf("Enter a number(%i): \n", i+1);
		scanf("%i", &number);
		
		sum = sum+number;
	}
	
	average = sum/5;
	
	printf("Average = %i\n", average);
	
	return 0;
}
