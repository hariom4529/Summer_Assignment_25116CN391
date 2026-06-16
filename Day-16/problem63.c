#include <stdio.h>
int main() 
{
    int n, sum;
    printf("Enter Size Of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Elements : ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Required Sum : ");
    scanf("%d", &sum);

    int found = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == sum) 
            {
                printf("Pair Found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if (!found) 
    {
        printf("No Pair Found.\n");
    }

    return 0;
}