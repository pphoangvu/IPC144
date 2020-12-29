/* -------------------------------------------
Name: Vu Pham
Student number:129908174
Email:vpham6@myseneca.ca
Section:K
Date:03/06/2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */
#include<stdio.h>
// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address {
	int streetNumber[3];
	char street[41];
	int apartmentNumber[4];
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code here...
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];

};
