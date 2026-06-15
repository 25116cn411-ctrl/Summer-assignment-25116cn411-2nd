#include <stdio.h>

int main()
{
    int arr[5] = {10, 50, 30, 40, 20};
    int largest = arr[0];
    int second = arr[0];
    int i;

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second)
        {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}