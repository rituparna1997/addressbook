#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contact.h"
#include "file.h"
// #include "populate.h"

void listContacts(AddressBook *addressBook, int sortCriteria) 
{
    if (addressBook->contactCount == 0) {
        printf("No contacts to display.\n");
        return;
    }
    printf("Contacts:\n");
    for (int i = 0; i < addressBook->contactCount; i++) {
        printf("%d. Name: %s, Phone: %s, Email: %s\n",
            i + 1,
            addressBook->contacts[i].name,
            addressBook->contacts[i].phone,
            addressBook->contacts[i].email);
    }
}

void initialize(AddressBook *addressBook) {
    addressBook->contactCount = 0;
    // Optional: initialize addressBook fields
    //populateAddressBook(addressBook); // Removed: function not defined
    
    // Load contacts from file during initialization (After files)
    //loadContactsFromFile(addressBook);
}

void saveAndExit(AddressBook *addressBook) {
    saveContactsToFile(addressBook); // Save contacts to file
    exit(EXIT_SUCCESS); // Exit the program
}

void createContact(AddressBook *addressBook)
{
    printf("createContact called\n");
	/* Define the logic to create a Contacts */

    char name_str[50], phone_str[20], email_str[50];

    // get name and validate
    printf("Enter name: ");
    scanf("%49s", name_str);

    // get phone num and validate
    printf("Enter phone: ");
    scanf("%19s", phone_str);

    // get the email and validate
    printf("Enter email: ");
    scanf("%49s", email_str);

    strcpy(addressBook->contacts[addressBook->contactCount].name, name_str);
    strcpy(addressBook->contacts[addressBook->contactCount].phone, phone_str);
    strcpy(addressBook->contacts[addressBook->contactCount].email, email_str);

    addressBook->contactCount++;
}

void searchContact(AddressBook *addressBook) 
{
    printf("searchContact called\n");
    /* Define the logic for search */
}

void editContact(AddressBook *addressBook)
{
    printf("editContact called\n");
	/* Define the logic for Editcontact */
    
}

void deleteContact(AddressBook *addressBook)
{
    printf("deleteContact called\n");
	/* Define the logic for deletecontact */
   
}

void saveContactsToFile(AddressBook *addressBook) {
    printf("saveContactsToFile called\n");
}
