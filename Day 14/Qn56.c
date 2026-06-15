#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 10, 30, 20};
    int i, j;

    printf("Duplicate Elements: ");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}