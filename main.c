#include <stdio.h>
#include "utilities.h"

void displayMenu() {
    printf("\n--- MFMS MENU ---\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice;
    float amount, basic, housing, transport, revenue, expenses;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("VAT: %.2f\n", calculateVAT(amount));
                break;
            case 2:
                printf("Enter basic: ");
                scanf("%f", &basic);
                printf("Enter housing: ");
                scanf("%f", &housing);
                printf("Enter transport: ");
                scanf("%f", &transport);
                printf("Gross Salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;
            case 3:
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);
                printf("Balance: %.2f\n", calculateBudget(revenue, expenses));
                break;
            case 4:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
