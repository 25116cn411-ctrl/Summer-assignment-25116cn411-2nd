#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array");
    printf("\n2. Sum of Elements");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array");
    printf("\n2. Sum of Elements");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}