#include <stdio.h>
#include "contact.h"


int main() 
{
    int choice;
    AddressBook addressBook;
    addressBook.contactCount = 0; // Fix: initialize contactCount member

    do {
        printf("\nAddress Book Menu:\n");
        printf("1. Create contact\n");
        printf("2. Search contact\n");
        printf("3. Edit contact\n");
        printf("4. Delete contact\n");
        printf("5. List all contacts\n");
    	printf("6. Save contacts\n");		
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createContact(&addressBook);
                break;
            case 2:
                searchContact(&addressBook);
                break;
            case 3:
                editContact(&addressBook);
                break;
            case 4:
                deleteContact(&addressBook);
                break;
            case 5:          
                // Fix: declare and get sortChoice before calling listContacts
                {
                    int sortChoice = 0;
                    printf("Enter sort option (e.g., 0 for none): ");
                    scanf("%d", &sortChoice);
                    listContacts(&addressBook, sortChoice);
                }
                break;
            case 6:
                printf("Saving and Exiting...\n");
                //saveContactsToFile(&addressBook);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    
    return 0;
}
