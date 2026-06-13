#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number Of Even Elements = %d\n", even);
    printf("Number Of Odd Elements = %d\n", odd);

    return 0;
}