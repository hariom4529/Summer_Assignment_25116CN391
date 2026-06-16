#include <stdio.h>

int main() 
{
    int n;
    printf("Enter Size Of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, maxElement;

    for (int i = 0; i < n; i++) 
    {
        int count = 0;

        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }

        if (count > maxFreq) 
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}