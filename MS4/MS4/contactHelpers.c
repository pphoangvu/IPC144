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

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>
// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"



// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MACONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}


// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();

}


// getInt:
int getInt(void)
{
	int number;
	char character;
	do {
		scanf("%d%c", &number, &character);
		if (character != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}


	} while (character != '\n');
	return number;
}


// getIntInRange:
int getIntInRange(int lowbound, int upbound) {
	int number;
	number = getInt();
	do {

		if (number<lowbound || number>upbound) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", lowbound, upbound);
			scanf("%d", &number);
		}

	} while (number<lowbound || number>upbound);

	return number;
}


// yes:
int yes(void) {
	int result;
	char chara;
	char chara2;
	do {
		scanf("%c%c", &chara, &chara2);

		if (chara2 != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}

	} while ((chara != 'y' && chara != 'Y' && chara != 'n' && chara != 'N') || chara2 != '\n');
	if (chara == 'y' || chara == 'Y') {
		result = 1;
	}
	else result = 0;
	return result;
}


// menu:
int menu(void) {
	int option;

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");

	option = getIntInRange(0, 6);
	return option;
}


// ContactManagerSystem:
void ContactManagerSystem(void) {
	int option;

	char prompt = 0;
	do {

		option = menu();
		switch (option) {

		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			clearKeyboard();
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 0:
			printf("\n");
			printf("Exit the program? (Y)es/(N)o: ");
			if (yes() == 1)
				prompt = 1;
			printf("\n");
			break;
		default:
			getIntInRange(0, 6);
			break;
		}
	} while (prompt != 1);

	printf("Contact Management System: terminated\n");
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}


// findContactIndex:


// displayContactHeader
void displayContactHeader(void) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");

}

// displayContactFooter
void displayContactFooter(int total) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n");

}

// displayContact:


// displayContacts:


// searchContacts:


// addContact:


// updateContact:


// deleteContact:


// sortContacts:
