#include<stdio.h>
int main (){
    int n,product = 1;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n!=0){
        product = product*(n%10);
        n = n/10;
    }
    printf("The Product Of The Digits Is : %d",product);
    return 0;
}