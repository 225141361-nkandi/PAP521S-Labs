#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

int main() {
    Employee staff[3] = {
        {1001, "Maria", 18500.50},
        {1002, "Simon", 17200.00},
        {1003, "Anna", 21000.75}
    };
    int i;

    printf("--- WEEK 11: STRUCTURES ---\n");
    for (i = 0; i < 3; i++) {
        printf("ID: %d | Name: %s | Salary: N$%.2f\n", staff[i].id, staff[i].name, staff[i].salary);
    }

    return 0;
}
