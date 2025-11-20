#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float da;
    float hra;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf(" %s", e.name);

    printf("Enter basic salary: ");
    scanf("%f", &e.basic);

    printf("Enter DA (Dearness Allowance): ");
    scanf("%f", &e.da);

    printf("Enter HRA (House Rent Allowance): ");
    scanf("%f", &e.hra);

    float gross = e.basic + e.da + e.hra;

    printf("\n Employee Salary Details:\n");
}