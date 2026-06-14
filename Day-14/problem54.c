#include<stdio.h>
int main ()
{
    int arr[100], n, i, key, count = 0;

    printf("Enter No Of Elements : ");
    scanf("%d", &n);

    printf("Enter Array Elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Find Frequency : ");
    scanf("%d", &key);

    for (i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }
    printf("Element found %d times", count);
    return 0;
}