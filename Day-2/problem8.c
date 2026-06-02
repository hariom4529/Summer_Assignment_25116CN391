#include <stdio.h>
int main()
{
    int n, rev = 0, temp;
    printf("Enter Number : ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rev = ((rev * 10) + (temp % 10));
        temp = temp / 10;
    }
    if (rev == n)
    {
        printf("The Number Is Palindrome");
    }
    else
    {
        printf("The Number Is Not Palindrome");
    }
    return 0;
}