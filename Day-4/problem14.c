#include<stdio.h>
int main (){
int n,i,first=0,second=1,next;
printf("Enter The Value Of N : ");
scanf("%d",&n);

if (n==0)
    {
    printf("The 0th Fibonacci Number Is : %d",first);
    }
else if (n==1)
    {
    printf("The First Fibonacci Term Is : %d",second);
    }
else
    for (i=2;i<=n-1;i++)
    {
    next=first+second;
    first=second;
    second=next;
    }
    printf("The %dt Fibonacci Term Is %d",n,second);

return 0;
}