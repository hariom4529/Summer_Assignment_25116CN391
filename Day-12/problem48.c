#include <stdio.h>

int perfect(int num)
{
    int i, sum = 0;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter A Number : ");
    scanf("%d", &num);

    if(perfect(num))
        printf("%d Is A Perfect Number\n", num);
    else
        printf("%d Is Not A Perfect Number\n", num);

    return 0;
}