//--------------------------------------------------
// Name:           VU
// Student Number: 129908174
// Email:          vpham6@myseneca.ca
// Section:        K
// Workshop:       4
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>

int main(void)
{
	int i;
	int lowvalue[10] = { 0 };
	int highvalue[10] = { 0 };
	int range;
	int day[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &range);
	printf("\n");
	while (range<3 || range>10)
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &range);
		printf("\n");
	}
	for (i = 0; i < range; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &highvalue[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &lowvalue[i]);
	}
	printf("\nDay  Hi  Low\n");
	for (i = 0; i < range; i++)
	{
		printf("%d    %d    %d\n", i + 1, highvalue[i], lowvalue[i]);
	}

	int highest = 0;
	int lowest = 0;

	for (i = 0; i < range; i++)
	{
		if (highvalue[highest] < highvalue[i])
			highest = i;

		if (lowvalue[lowest] > lowvalue[i])
			lowest = i;
	}
	printf("\n");
	printf("\nThe highest temperature was %d, on day %d", highvalue[highest], day[highest]);
	printf("\nThe lowest temperature was %d, on day %d ", lowvalue[lowest], day[lowest]);
	printf("\n");

	int n;
	
	do {
		printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &n);
		printf("\n");
		while (n > 3) {
			printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &n);
			printf("\n");
		}
		while (n < 1) {
			printf("Goodbye!\n");
			return 0;
		}
		double avesum = 0.0;
		double aveday;
		double aveall;
		
		for (i = 0; i < n; i++) {
			
			aveday = (highvalue[i] + lowvalue[i]) / 2.0;
			avesum += aveday;
			
		}
		printf("%d \n", &avesum);
		printf("%d \n", &aveday);
		aveall = avesum / n;
		printf("The average temperature up to day %d is: %.2lf\n", day[n - 1], aveall);

	} while (n > 0 && n < 4);

	return 0;
}