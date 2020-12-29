/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:



// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )

// getName:
void getName(struct Contact* contactname) {

	char option;
	printf("Please enter the contact's first name: ");
	scanf(" %30s", contactname->name.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &option);
	while (getchar() != '\n');
	if (option == 'y' || option == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6s", contactname->name.middleInitial);

	}
	printf("Please enter the contact's last name: ");
	scanf(" %35s", contactname->name.lastName);
}



// getAddress:
void getAddress(struct	Contact * contactaddress) {

	char option;
	printf("Please enter the contact's street number: ");
	
	scanf(" %d", &contactaddress->address.streetNumber);
	printf("Please enter the contact's street name: ");
	scanf(" %40s", contactaddress->address.street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &option);
	while (getchar() != '\n');
	if (option == 'y' || option == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &contactaddress->address.apartmentNumber);

	}
	printf("Please enter the contact's postal code: ");
	while (getchar() != '\n');
	scanf(" %7[^\n]", contactaddress->address.postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %40s", contactaddress->address.city);

}


// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Contact * contactnumbers) {
	char option;


	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &option);
	while (getchar() != '\n');
	if (option == 'y' || option == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20s", contactnumbers->numbers.cell);

	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &option);
	while (getchar() != '\n');
	if (option == 'y' || option == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %20s", contactnumbers->numbers.home);
		while (getchar() != '\n');
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &option);
	while (getchar() != '\n');
	if (option == 'y' || option == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %20s", contactnumbers->numbers.business);

	}
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// +-------------------------------------------------+

// getContact
void getContact(struct Contact*contactway) {



}