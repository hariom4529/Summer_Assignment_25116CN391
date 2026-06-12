#include <stdio.h>

int armstrong(int num)
{
    int temp, rem, sum = 0;

    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter A Number : ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d Is An Armstrong Number\n", num);
    else
        printf("%d Is Not An Armstrong Number\n", num);

    return 0;
}