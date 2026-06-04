#include<stdio.h>
int main (){
    int n,temp,reminder,result=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    temp = n;

    while(n!=0)
    {
        reminder = n%10;
        result = result + reminder * reminder * reminder;
        n = n/10;
    }
    if(result == temp)
    {
        printf("%d Is An Armstrong Number",temp);
    }
    else
    {
        printf("%d Is Not An Armstrong Number",temp);
    }

    return 0;
}