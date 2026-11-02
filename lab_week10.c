#include <stdio.h>

int main() {
    FILE *fp;
    int id;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Employee Name: ");
    scanf("%49s", name);
    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    fp = fopen("employees.txt", "a");
    
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    fprintf(fp, "%d %s %.2f\n", id, name, salary);
    fclose(fp);
    printf("\nData saved to employees.txt successfully.\n");

    fp = fopen("employees.txt", "r");
    
    if (fp == NULL) {
        printf("Error: Could not open file to read.\n");
        return 1;
    }

    printf("\n--- Reading from File ---\n");
    while (fscanf(fp, "%d %49s %f", &id, name, &salary) == 3) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", id, name, salary);
    }
    
    fclose(fp);

    return 0;
}
