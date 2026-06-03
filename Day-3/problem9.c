#include<stdio.h>
int main (){
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
        printf("%d Is Not Prime Number",n);
        break;
        }
    }
    if (i>n/2)
        {
        printf("%d Is Prime Number",n);
        }
    return 0;
}