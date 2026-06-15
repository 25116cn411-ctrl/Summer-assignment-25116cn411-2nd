#include <stdio.h>

int main()
{
    int arr[6] = {0,10,0,20,30,0};
    int temp[6];
    int i, j = 0;

    for(i = 0; i < 6; i++)
    {
        if(arr[i] != 0)
        {
            temp[j++] = arr[i];
        }
    }

    while(j < 6)
    {
        temp[j++] = 0;
    }

    for(i = 0; i < 6; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}