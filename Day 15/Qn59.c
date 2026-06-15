#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int last = arr[4];
    int i;

    for(i = 4; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}