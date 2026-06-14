#include<stdio.h>
int main ()
{
    int arr[100], n, i, j;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    printf("Enter Array Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate Elements: ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        { 
           if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}