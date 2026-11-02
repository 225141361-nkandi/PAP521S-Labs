#include <stdio.h>

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}

void displayMenu() {
    printf("\n--- MFMS MENU ---\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice;
    float amount, basic, housing, transport, revenue, expenses;
    int searchID, position;
    int employeeIDs[] = {101, 102, 103, 104, 105};

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("VAT (15%%): %.2f\n", calculateVAT(amount));
                break;
            case 2:
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);
                printf("Gross Salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;
            case 3:
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);
                float budget = calculateBudget(revenue, expenses);
                if (budget > 0) {
                    printf("SURPLUS: %.2f\n", budget);
                } else if (budget < 0) {
                    printf("DEFICIT: %.2f\n", budget);
                } else {
                    printf("BALANCED: %.2f\n", budget);
                }
                break;
            case 4:
                printf("Enter employee ID to search: ");
                scanf("%d", &searchID);
                position = searchEmployee(searchID, employeeIDs, 5);
                if (position != -1) {
                    printf("Employee found at position %d.\n", position);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            case 5:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
