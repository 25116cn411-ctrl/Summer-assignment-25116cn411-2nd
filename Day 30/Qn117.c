#include <stdio.h>

int main() {
    int n, i;
    char name[50][30];
    int roll[50], marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }

    return 0;
}