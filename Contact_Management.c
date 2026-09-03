#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "contacts.dat"

// Structure to hold contact details
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

// Function prototypes
void addContact();
void viewContacts();
void searchContact();
void editContact();
void deleteContact();
void clearInputBuffer();

int main() {
    int choice;

    while (1) {
        printf("\n=== CONTACT MANAGEMENT SYSTEM ===\n");
        printf("1. Add New Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Edit Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("=================================\n");
        printf("Enter your choice (1-6): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }
        clearInputBuffer(); // Clean trailing newline character

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                editContact();
                break;
            case 5:
                deleteContact();
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please select an option between 1 and 6.\n");
        }
    }
    return 0;
}

// Helper function to safely clear input stream
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 1. Function to add a new contact
void addContact() {
    FILE *fp = fopen(FILE_NAME, "ab"); // Open in append-binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Contact newContact;

    printf("\nEnter Name: ");
    fgets(newContact.name, sizeof(newContact.name), stdin);
    newContact.name[strcspn(newContact.name, "\n")] = '\0'; // Remove newline character

    printf("Enter Phone Number: ");
    fgets(newContact.phone, sizeof(newContact.phone), stdin);
    newContact.phone[strcspn(newContact.phone, "\n")] = '\0';

    printf("Enter Email Address: ");
    fgets(newContact.email, sizeof(newContact.email), stdin);
    newContact.email[strcspn(newContact.email, "\n")] = '\0';

    // Write structure block directly to file
    fwrite(&newContact, sizeof(struct Contact), 1, fp);
    fclose(fp);

    printf("Contact saved successfully!\n");
}

// 2. Function to read and display all contacts
void viewContacts() {
    FILE *fp = fopen(FILE_NAME, "rb"); // Open in read-binary mode
    if (fp == NULL) {
        printf("\nNo contacts found. Please add a contact first!\n");
        return;
    }

    struct Contact c;
    int count = 1;

    printf("\n---------------------------------------------------------------\n");
    printf("%-5s %-20s %-15s %-25s\n", "S.No", "Name", "Phone", "Email");
    printf("---------------------------------------------------------------\n");

    // Read blocks sequentially until End-Of-File (EOF)
    while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
        printf("%-5d %-20s %-15s %-25s\n", count++, c.name, c.phone, c.email);
    }
    printf("---------------------------------------------------------------\n");

    fclose(fp);
}

// 3. Function to search for a contact by name
void searchContact() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo contacts stored yet.\n");
        return;
    }

    char searchName[50];
    struct Contact c;
    int found = 0;

    printf("\nEnter the Name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
        // Case-sensitive exact/partial comparison check
        if (strstr(c.name, searchName) != NULL) {
            if (!found) {
                printf("\nMatch(es) Found:\n");
                printf("---------------------------------------------------\n");
            }
            printf("Name : %s\n", c.name);
            printf("Phone: %s\n", c.phone);
            printf("Email: %s\n\n", c.email);
            found = 1;
        }
    }

    if (!found) {
        printf("No contact found matching '%s'.\n", searchName);
    }
    
    fclose(fp);
}

// 4. Function to modify existing contact info
void editContact() {
    FILE *fp = fopen(FILE_NAME, "rb+"); // Open for reading and writing update
    if (fp == NULL) {
        printf("\nNo contacts available to edit.\n");
        return;
    }

    char targetName[50];
    struct Contact c;
    int found = 0;

    printf("\nEnter the exact Name of the contact to edit: ");
    fgets(targetName, sizeof(targetName), stdin);
    targetName[strcspn(targetName, "\n")] = '\0';

    while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
        if (strcmp(c.name, targetName) == 0) {
            found = 1;
            
            printf("\nCurrent details:\nName: %s | Phone: %s | Email: %s\n", c.name, c.phone, c.email);
            printf("\nEnter New Details:\n");

            printf("Enter New Name: ");
            fgets(c.name, sizeof(c.name), stdin);
            c.name[strcspn(c.name, "\n")] = '\0';

            printf("Enter New Phone: ");
            fgets(c.phone, sizeof(c.phone), stdin);
            c.phone[strcspn(c.phone, "\n")] = '\0';

            printf("Enter New Email: ");
            fgets(c.email, sizeof(c.email), stdin);
            c.email[strcspn(c.email, "\n")] = '\0';

            // Shift file pointer backwards by one record size to overwrite the old entry
            fseek(fp, -sizeof(struct Contact), SEEK_CUR);
            fwrite(&c, sizeof(struct Contact), 1, fp);
            
            printf("Contact updated successfully!\n");
            break; 
        }
    }

    if (!found) {
        printf("Contact matching '%s' not found.\n", targetName);
    }

    fclose(fp);
}

// 5. Function to delete a contact record
void deleteContact() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo contacts available to delete.\n");
        return;
    }

    char targetName[50];
    struct Contact c;
    int found = 0;

    printf("\nEnter the exact Name of the contact to delete: ");
    fgets(targetName, sizeof(targetName), stdin);
    targetName[strcspn(targetName, "\n")] = '\0';

    // Create a temporary staging file to store records we want to keep
    FILE *tempFp = fopen("temp.dat", "wb");
    if (tempFp == NULL) {
        printf("Error creating temporary file structure!\n");
        fclose(fp);
        return;
    }

    while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
        if (strcmp(c.name, targetName) == 0) {
            found = 1; // Skip writing this entry to drop it
        } else {
            fwrite(&c, sizeof(struct Contact), 1, tempFp);
        }
    }

    fclose(fp);
    fclose(tempFp);

    if (found) {
        remove(FILE_NAME);             // Delete old dataset
        rename("temp.dat", FILE_NAME); // Swap staged temporary file to main asset
        printf("Contact deleted safely!\n");
    } else {
        remove("temp.dat"); // Scrap temporary asset if nothing changed
        printf("Contact matching '%s' not found.\n", targetName);
    }
}
