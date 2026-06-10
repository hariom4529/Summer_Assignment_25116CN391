#include<stdio.h>
int main() 
{
    int n;
    printf("Enter The Number Of Rows : ");
    scanf("%d", &n);

    char ch;

    for(int i = 1; i <= n; i++) 
    {

        for(int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        for(ch = 'A'; ch < 'A' + i; ch++) 
        {
            printf("%c", ch);
        }

        for(ch = 'A' + i - 2; ch >= 'A'; ch--) 
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}