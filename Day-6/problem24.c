#include<stdio.h>
int main()
{
    int n, x, i, result=1;
    printf("Enter Base : ");
    scanf("%d",&n);

    printf("Enter Power : ");
    scanf("%d",&x);

    for (i=1; i<=x; i++)
    {
        result = result * n;
    }
    printf("Result : %d", result);
    return 0;
}