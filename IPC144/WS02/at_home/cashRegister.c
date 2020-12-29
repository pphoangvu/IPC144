/*
     Name:      <Vu> 
     Student#:  <129908174>
     Section:   <K>
*/

#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications
#include<stdio.h>

int main(void)
{
	int loonies;
	int quarters;
	double amount;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	double gst;
	double total;
	int dimes;
	int nickels;
	int pennies;
	gst = amount * .13 + .005;
	printf("GST: %.2lf\n", gst);
	total = amount + gst;
	printf("Balance owing: $%.2lf\n", total);
	loonies = total / 1;
	total = total - loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, total);
	quarters = total * 100 / 25;
	printf("%d", total);
	total = total - quarters * .25;
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, total);
	total = total * 100;
	dimes = (int)total / 10;
	total = (int)total % 10;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimes, total*0.01);
	nickels = (int)total / 5;
	total = (int)total % 5;
	printf("Nickels required: %d, balance owing $%.2lf\n", nickels, total / 100);
	pennies = (int)total / 1;
	total = (int)total % 1;
	printf("Pennies required: %d, balance owing $%.2lf\n", pennies, total / 100);
	return 0;
}
