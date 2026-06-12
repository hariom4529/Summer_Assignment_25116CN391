#include <stdio.h>

int palindrome(int num)
{
    int rev = 0, temp = num, rem;

    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter A Number : ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("%d Is A Palindrome Number\n", num);
    else
        printf("%d Is Not A Palindrome Number\n", num);

    return 0;
}