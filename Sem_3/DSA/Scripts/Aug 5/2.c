//WAP to reverse the contents of an array of n elements.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];

    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int temp;
    for(int i=0; i<n/2;i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    printf("Reversed Array:");
    for(int i=0;i<n;i++)
        printf(" %d", arr[i]);

    return 0;
}