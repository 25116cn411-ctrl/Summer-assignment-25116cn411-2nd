#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxFreq = 0;

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] > maxFreq) {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c", maxChar);
    printf("\nFrequency: %d", maxFreq);

    return 0;
}