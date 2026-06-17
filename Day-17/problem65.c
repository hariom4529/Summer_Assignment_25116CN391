#include <stdio.h>
int main() 
{
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i;

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

    for(i = 0; i < n1; i++) 
    {
        merged[i] = arr1[i];
    }

    for(i = 0; i < n2; i++) 
    {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged Array : ");
    for(i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }

    return 0;
}