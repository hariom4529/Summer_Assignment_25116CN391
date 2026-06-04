#include<stdio.h>
int main (){
    int num,start,end,temp,digit,sum=0;
    printf("Enter Starting Number : ");
    scanf("%d",&start);
    printf("Enter Ending Number : ");
    scanf("%d",&end);
    printf("Armstrong Numbers Between %d And %d Are : ",start,end);
    for(num=start;num<=end;num++)
    {
        temp = num;
        sum=0;
        while(temp!=0)
        {
            digit = temp%10;
            sum = sum + digit * digit * digit;
            temp = temp/10;
        }
        if(sum == num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}