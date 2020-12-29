// Name: Vu
// Student Number:129908174
// Email:vpham@myseneca.ca
// Section:K
// Workshop:3

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include<stdio.h>
#define NUMS 4
int main(void)
{
	int i;
	int highvalue;
	int lowvalue;
	double totalhigh = 0;
	double totallow = 0;
	double average;
	int highest = -40;
	int lowest = 40;
	int highday;
	int lowday;

	printf("---=== IPC Temperature Analyzer ===---\n");
	for (i = 0; i < NUMS; i++) {
		do {
			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &highvalue);
			printf("\n");
			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &lowvalue);
			printf("\n");
			if (highvalue > 40 || lowvalue < -40 || lowvalue > highvalue)
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
		} while (highvalue > 40 || lowvalue < -40 || lowvalue > highvalue);
		totalhigh += highvalue;
		totallow += lowvalue;
		if (highvalue>highest)
		{
			highest = highvalue;
			highday = i + 1;
		}
		if (lowvalue<lowest)
		{
			lowest = lowvalue;
			lowday = i + 1;
		}

	}

	average = (totalhigh + totallow) / (NUMS * 2);
	printf("The average (mean) temperature was: %.2lf\n", average);
	printf("The highest temperature was %d, on day %d\n", highest, highday);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowday);
	return 0;
}