#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 1};
    int n = 7;

    int maxCount = 0, element;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);

    return 0;
}