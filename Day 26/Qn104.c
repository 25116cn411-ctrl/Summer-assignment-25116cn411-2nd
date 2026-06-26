#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nQ2. Which symbol is used for comments in C?\n");
    printf("1. //\n2. <!-- -->\n3. ##\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nQ3. C is a ______ language.\n");
    printf("1. High Level\n2. Machine\n3. Assembly\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}