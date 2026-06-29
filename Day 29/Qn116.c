#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[3];

    for(int i = 0; i < 3; i++) {

        printf("\nItem %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &item[i].id);

        printf("Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\nInventory Details\n");

    for(int i = 0; i < 3; i++) {

        printf("\nID : %d", item[i].id);
        printf("\nName : %s", item[i].name);
        printf("\nQuantity : %d", item[i].quantity);
        printf("\nPrice : %.2f\n", item[i].price);
    }

    return 0;
}