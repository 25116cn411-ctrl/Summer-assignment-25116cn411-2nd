#include <stdio.h>

int main() {
    int n, i;
    char book[50][50];
    char author[50][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book Name: ");
        scanf("%s", book[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++) {
        printf("%d. %s - %s\n", i + 1, book[i], author[i]);
    }

    return 0;
}