#include <stdio.h>

int main() 
{
    int arr1[50], arr2[50];
    int n1, n2, i, j;

    printf("Enter Size Of First Array : ");
    scanf("%d", &n1);

    printf("Enter Elements Of First Array : ");
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter Size Of Second Array : ");
    scanf("%d", &n2);

    printf("Enter Elements Of Second Array : ");
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection Of Arrays : ");

    for(i = 0; i < n1; i++) 
    {
        for(j = 0; j < n2; j++) 
        {
            if(arr1[i] == arr2[j]) 
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}