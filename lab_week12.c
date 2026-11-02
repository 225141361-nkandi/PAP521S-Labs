#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

void swapSalaries(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void updateSalary(Employee *e, double newSalary) {
    e->salary = newSalary;
}

int main() {
    double sal1 = 15000.00;
    double sal2 = 20000.00;
    
    Employee staff = {1001, "Maria", 18500.50};

    printf("--- WEEK 12: POINTERS ---\n");
    printf("Before Swap: Sal1 = %.2f, Sal2 = %.2f\n", sal1, sal2);
    swapSalaries(&sal1, &sal2);
    printf("After Swap : Sal1 = %.2f, Sal2 = %.2f\n", sal1, sal2);

    printf("\nBefore Update: %s earns N$%.2f\n", staff.name, staff.salary);
    updateSalary(&staff, 25000.00);
    printf("After Update : %s earns N$%.2f\n", staff.name, staff.salary);

    return 0;
}
