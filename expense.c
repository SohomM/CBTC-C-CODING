#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPENSES 100

struct Expense {
    float amount;
    char category[50];
    char date[20];
};

struct Expense expenses[MAX_EXPENSES];
int numExpenses = 0;

void addExpense(float amount, const char* category, const char* date) {
    if (numExpenses < MAX_EXPENSES) {
        expenses[numExpenses].amount = amount;
        strcpy(expenses[numExpenses].category, category);
        strcpy(expenses[numExpenses].date, date);
        numExpenses++;
        printf("Expense added successfully.\n");
    } else {
        printf("Expense tracker is full. Cannot add more expenses.\n");
    }
}

void viewExpenses() {
    printf("Expenses:\n");
    for (int i = 0; i < numExpenses; i++) {
        printf("Amount: $%.2f | Category: %s | Date: %s\n", 
               expenses[i].amount, expenses[i].category, expenses[i].date);
    }
}

void generateReport() {
    // Implement report generation based on user's requirements
}

int main() {
    int choice;
    float amount;
    char category[50];
    char date[20];

    do {
        printf("\nExpense Tracker\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Generate Report\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("Enter category: ");
                scanf("%s", category);
                printf("Enter date (MM/DD/YYYY): ");
                scanf("%s", date);
                addExpense(amount, category, date);
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                generateReport();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
