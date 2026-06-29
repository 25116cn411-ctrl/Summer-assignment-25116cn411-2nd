#include <stdio.h>

int main() {
    int tickets;
    float price = 250;
    float total;

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\nTicket Price = %.2f", price);
    printf("\nTotal Amount = %.2f", total);

    return 0;
}