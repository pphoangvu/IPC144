// ----------------------------------------------------------------------------
// DO NOT remove the below 2 lines.
// The below two lines is needed to ensure only one copy
// of this header file is included when compiling the project.
// (it is referred to as "safeguarding")
// You will learn about this in C++ (OOP244/BTP200)
// For now, simply leave this code in!
#ifndef CONTACTS_H_
#define CONTACTS_H_
// ----------------------------------------------------------------------------

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


//------------------------------------------------------
// Structure Types
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        structures below:                        |
// +-------------------------------------------------+

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};
// Structure type Address declaration
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};

// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};


//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function prototypes below...             |
// +-------------------------------------------------+

// getName:
void getName(struct Name *);

// getAddress:
void getAddress(struct Address *);

// getNumbers:
void getNumbers(struct Numbers *);

// getContact:
void getContact(struct Contact *);


// ----------------------------------------------------------------------------
// DO NOT remove the below line (closing of the "safeguard" condition)
#endif // !CONTACTS_H_
