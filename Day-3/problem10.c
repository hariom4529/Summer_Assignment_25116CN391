#include<stdio.h>
int main (){
    int n,i,j,st,end;
    printf("Enter Starting Number : ");
    scanf("%d",&st);
    printf("Enter Ending Number : ");
    scanf("%d",&end);
    printf("Prime Numbers Between %d and %d are : ",st,end);
    for (i=st;i<=end;i++)
    {        if (i<2)
        {            continue;
        }     for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                break;
            }
        }        if (j>i/2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}