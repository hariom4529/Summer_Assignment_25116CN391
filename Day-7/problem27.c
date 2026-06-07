#include<stdio.h>
int SumOfDigits(int n)
    {
        if (n == 0)
            return 0;
        else
            return (n % 10) + SumOfDigits(n / 10);
    }

int main()
    {
        int n;
        printf("Enter Number : ");
        scanf("%d",&n);

        printf("Sum Of Digits of %d : %d",n,SumOfDigits(n));
        return 0;
    }