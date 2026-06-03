#include<stdio.h>
int main ()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for( int i=n;i<=10*n;i=i+n)
    {
        printf("%d\n",i);
    }
    return 0;
}