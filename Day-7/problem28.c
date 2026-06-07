#include<stdio.h>

int reverse = 0;

void reversenumber(int n)
    {
        if (n == 0)
            return;

        reverse = reverse * 10 + (n % 10);
        reversenumber(n / 10);
    }

int main()
    {
        int num;
        printf("Enter Number : ");
        scanf("%d",&num);

        reversenumber(num);
        printf("Reverse Of %d : %d",num,reverse);
        return 0;
    }