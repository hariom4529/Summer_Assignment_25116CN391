#include<stdio.h>

int prime (int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main ()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if (prime(n))
        printf("%d Is A Prime Number.",n);
    else
        printf("%d Is Not A Prime Number.",n);

    return 0;
}