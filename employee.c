#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicPay;
    float allowance;
    float deduction;
    float netPay;
};

void calculateNetPay(struct Employee *emp) {
    emp->netPay = emp->basicPay + emp->allowance - emp->deduction;
}


void displayEmployeeDetails(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Basic Pay: %.2f\n", emp.basicPay);
    printf("Allowance: %.2f\n", emp.allowance);
    printf("Deduction: %.2f\n", emp.deduction);
    printf("Net Pay: %.2f\n", emp.netPay);
    printf("\n");
}

int main() {

    struct Employee employees[5];


    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        employees[i].id = i + 1;

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);

        printf("Allowance: ");
        scanf("%f", &employees[i].allowance);

        printf("Deduction: ");
        scanf("%f", &employees[i].deduction);


        calculateNetPay(&employees[i]);
        printf("\n");
    }


    printf("Net Pay for Each Employee:\n");
    for (int i = 0; i < 5; ++i) {
        displayEmployeeDetails(employees[i]);
    }

    return 0;
}
