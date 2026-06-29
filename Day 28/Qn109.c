#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book b[3];

    for(int i = 0; i < 3; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\nLibrary Records\n");

    for(int i = 0; i < 3; i++) {
        printf("\nBook ID : %d", b[i].id);
        printf("\nBook Name : %s", b[i].name);
        printf("\nAuthor : %s\n", b[i].author);
    }

    return 0;
}