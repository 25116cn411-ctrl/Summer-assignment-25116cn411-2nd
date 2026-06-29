#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Find Length");
    printf("\n2. Reverse String");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}