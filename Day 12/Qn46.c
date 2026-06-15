#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, temp = n, digit;

    while(n > 0)
    {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return temp == sum;
}

int main()
{
    int num;
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}