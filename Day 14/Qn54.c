#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 10, 30, 10};
    int key, i, count = 0;

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}