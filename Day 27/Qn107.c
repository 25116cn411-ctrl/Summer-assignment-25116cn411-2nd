#include <stdio.h>

int main() {
    float basic, hra, da, total;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;

    total = basic + hra + da;

    printf("\nBasic Salary : %.2f", basic);
    printf("\nHRA          : %.2f", hra);
    printf("\nDA           : %.2f", da);
    printf("\nTotal Salary : %.2f", total);

    return 0;
}