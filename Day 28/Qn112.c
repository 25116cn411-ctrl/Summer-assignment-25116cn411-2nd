#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[3];

    for(int i = 0; i < 3; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone: ");
        scanf("%s", c[i].phone);
    }

    printf("\nSaved Contacts\n");

    for(int i = 0; i < 3; i++) {
        printf("\nName : %s", c[i].name);
        printf("\nPhone: %s\n", c[i].phone);
    }

    return 0;
}