#include<stdio.h>
int main ()
{
    int dec, bin, i=0;
    printf("Enter A Decimal Number: ");
    scanf("%d",&dec);

    if(dec==0)
    {
        printf("Binary : 0");
    }

    else
    {
        int binary[32]; 
        while (dec > 0)
        {
            binary[i] = dec % 2; 
            dec = dec / 2; 
            i++;
        }

        printf("Binary : ");
        for (int j = i - 1; j >= 0; j--)
            {
                printf("%d", binary[j]); 
            }
    }
}