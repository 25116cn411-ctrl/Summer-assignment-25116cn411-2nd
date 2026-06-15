#include <stdio.h>

int main()
{
    int arr[5], i;
    int even = 0, odd = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}