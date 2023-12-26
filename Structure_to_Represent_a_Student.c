#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    int age;
    long long mobileNumber;
};

void addRecord(struct Student students[], int *numStudents) {
    printf("\nEnter student details:\n");
    printf("Name: ");
    scanf("%s", students[*numStudents].name);
    printf("Roll Number: ");
    scanf("%d", &students[*numStudents].rollNumber);
    printf("Age: ");
    scanf("%d", &students[*numStudents].age);
    printf("Mobile Number: ");
    scanf("%lld", &students[*numStudents].mobileNumber);
    (*numStudents)++;
    printf("Record added successfully!\n");
}

// Function to display all student records
void displayRecords(struct Student students[], int numStudents) {
    if (numStudents == 0) {
        printf("\nNo records available.\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < numStudents; ++i) {
        printf("Name:\n", students[i].name);
        printf("Roll Number:\n", students[i].rollNumber);
        printf("Age:\n", students[i].age);
        printf("Mobile Number:\n", students[i].mobileNumber);
 		printf("------------------------------------------------\n");

    }

    printf("------------------------------------------------\n");
}

int main() {
    struct Student students[100];
    int numStudents = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord(students, &numStudents);
                break;
            case 2:
                displayRecords(students, numStudents);
                break;
            case 3:
                printf("Exiting....\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
