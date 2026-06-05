#include<stdio.h>
int main ()
{
    int num, i, temp, rem, fact, sum=0;
    printf("Enter Number : ");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
        {
            rem = temp % 10;
            fact = 1;
            for(i = 1; i<= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }
        
    if(sum==num)
        {
            printf("%d Is A Strong Number",num);
        }
    else
        {
            printf("%d Is Not A Strong Number",num);
        }
    return 0;
}