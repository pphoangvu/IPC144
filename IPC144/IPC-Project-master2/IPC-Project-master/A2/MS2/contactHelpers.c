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

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
	printf("(Press Enter to continue)");
	clearKeyboard();

}

// getInt function definition goes here:
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

// getIntInRange function definition goes here:
int getIntInRange(int lowbound, int upbound) {
	int number;
	number = getInt();
	do {
		
		if (number<lowbound || number>upbound) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d: ", lowbound,upbound);
			scanf("%d", &number);
		}
		
	} while (number<lowbound || number>upbound);

	return number;
}

// yes function definition goes here:
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

// menu function definition goes here:
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
	getIntInRange(0, 6);
	option = getIntInRange(0, 6);
	return option;
}

// ContactManagerSystem function definition goes here:
void contactManagerSystem(void){
	int option; 
	option = getInt();
	char prompt;

	switch (option){
	case 1:
		printf("<<< Feature 1 is unavailable >>>\n\n");
		pause();
		break;
	case 2:
		printf("<<< Feature 2 is unavailable >>>\n\n");
		pause();
		break;
	case 3:
		printf("<<< Feature 3 is unavailable >>>\n\n");
		pause();
		break;
	case 4:
		printf("<<< Feature 4 is unavailable >>>\n\n");
		pause();
		break;
	case 5:
		printf("<<< Feature 5 is unavailable >>>\n\n");
		pause();
		break;
	case 6:
		printf("<<< Feature 4 is unavailable >>>\n\n");
		pause();
		break;
	case 0:
		printf("Exit the program? (Y)es/(N)o: ");
		scanf(" %c", prompt);
		while (getchar() != '\n');
		if (prompt == 'y' || prompt == 'Y') {
			printf("Contact Management System: terminate\n");

		}
		else if (prompt == 'n' || prompt == 'N') {
			menu();
		}
	default: getIntInRange(0,6);
		break;
	}
	
}