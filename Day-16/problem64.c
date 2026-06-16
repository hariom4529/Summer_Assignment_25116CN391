#include <stdio.h>
int main() {

    int n;
     printf("Enter Size Of Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; ) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            } 
            else 
            {
                j++;
            }
        }
    }

    printf("Array After Removing Duplicates :\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}