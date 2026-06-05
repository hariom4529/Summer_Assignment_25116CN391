#include<stdio.h>
int main()
{
    long long n,i,lpf=-1;
    printf("Enter Number : ");
    scanf("%lld",&n);

    while(n%2==0)
        {
            lpf=2;
            n=n/2;
        }
    for (i=3;i*i<=n;i=i+2)
        {
            while(n%i==0)
                {
                    lpf = i;
                    n=n/i;
                }
        }
    if(n>2)
        {
            lpf = n;
        }
    printf("Largest Prime Factor = %lld",lpf);
    return 0;
}