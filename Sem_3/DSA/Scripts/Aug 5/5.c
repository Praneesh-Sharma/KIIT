//Given an unsorted array of size n, WAP to find and display the number of elements between two elements a and b (both inclusive).
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

    int lim1, lim2;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lim1, &lim2);

    int count = 0;
    printf("\nResult: ");
    for(int i=0;i<n;i++){
        if(arr[i]>=lim1 && arr[i]<=lim2){
            printf(" %d", arr[i]);
            count++;
        }
    }
    printf("\nNumber of elements: %d", count);

    return 0;
}