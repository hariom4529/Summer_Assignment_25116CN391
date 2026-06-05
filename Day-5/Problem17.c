#include<stdio.h>
int main ()
{
    int num, i, sum=0;
    printf("Enter Number : ");
    scanf("%d",&num);

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
            {
                sum = sum + i;
            }
    }

    if(sum == num)
    printf("%d Is A Perfect Number",num);
    else
    printf("%d Is Not A Perfect Number",num);
    return 0;
}