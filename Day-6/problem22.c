#include<stdio.h>
#include<math.h>
int main()
{
    long long bin;
    int dec=0, i=0, rem;
    printf("Enter A Binary Number : ");
    scanf("%lld",&bin);

    while (bin > 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        dec = dec + rem * pow(2, i);
        i++;
    }

    printf("Decimal : %d", dec);
    return 0;
}