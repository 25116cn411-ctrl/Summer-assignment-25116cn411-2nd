#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int target = 12;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair: %d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}