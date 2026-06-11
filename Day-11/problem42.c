#include<stdio.h>
int maximum (int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Maximum Number Is : %d",maximum(a,b));
    
    return 0;
}