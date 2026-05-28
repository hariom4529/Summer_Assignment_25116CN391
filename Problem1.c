#include<stdio.h>
int main (){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("Sum of First %d Natural Number is : %d",n,n*(n+1)/2);
    return 0;
}