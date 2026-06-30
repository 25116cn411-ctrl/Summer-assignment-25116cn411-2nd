#include <stdio.h>

void addStudent(int roll[], char name[][30], int marks[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayStudent(int roll[], char name[][30], int marks[], int n) {
    printf("\n----- Student List -----\n");
    printf("Roll\tName\tMarks\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

int main() {
    int n;
    int roll[50], marks[50];
    char name[50][30];

    printf("Enter number of students: ");
    scanf("%d", &n);

    addStudent(roll, name, marks, n);
    displayStudent(roll, name, marks, n);

    return 0;
}