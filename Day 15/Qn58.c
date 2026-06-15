#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int first = arr[0];
    int i;

    for(i = 0; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[4] = first;

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}