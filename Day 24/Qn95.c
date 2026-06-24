#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int maxLen = 0, i = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    char word[50];

    while(sscanf(&str[i], "%s", word) == 1) {
        int len = strlen(word);

        if(len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }

        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        while(str[i] == ' ')
            i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}