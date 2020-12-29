/* -------------------------------------------
Name: Vu Pham 
Student number: 129908174
Email:vpham6@myseneca.ca
Section: K
Date: 04-01-2018
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contactHelpers.h"
#include "contacts.h"


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:
void getName(struct Name * contactname) {


	printf("Please enter the contact's first name: ");
	scanf(" %30s", contactname->firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6s", contactname->middleInitial);
		clearKeyboard();
	}



	printf("Please enter the contact's last name: ");
	scanf(" %35s", contactname->lastName);
	clearKeyboard();

}

// getAddress:
void getAddress(struct	Address * contactaddress) {


	printf("Please enter the contact's street number: ");
	contactaddress->streetNumber = getInt();

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", contactaddress->street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's apartment number: ");
		contactaddress->apartmentNumber = getInt();
	}
	printf("Please enter the contact's postal code: ");

	scanf(" %7[^\n]", contactaddress->postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf(" %40s", contactaddress->city);
	clearKeyboard();

}

// getNumbers:
void getNumbers(struct Numbers * contactnumbers) {

	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(contactnumbers->cell);

	printf("Do you want to enter a home phone number? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(contactnumbers->home);

	}

	printf("Do you want to enter a business phone number? (y or n): ");
	if (yes()) {

		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(contactnumbers->business);
	}
}

// getContact:
void getContact(struct Contact * contact) {
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
}