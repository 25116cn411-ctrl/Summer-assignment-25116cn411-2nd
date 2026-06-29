#include <stdio.h>

int main() {
    float balance, deposit, withdraw;

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("Final Balance = %.2f", balance);

    return 0;
}