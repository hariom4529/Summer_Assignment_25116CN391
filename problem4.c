#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0)
        {
        n = n/10;
        count++;
        }
    printf("The Number Of Digits Are %d ",count);
    return 0;
}