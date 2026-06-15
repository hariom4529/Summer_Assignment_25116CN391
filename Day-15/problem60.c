#include <stdio.h>

int main() {
    int n;

    printf("Enter The Size Of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    while (j < n) {
        arr[j] = 0;
        j++;
    }

    printf("Array After Moving Zeroes To End: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}