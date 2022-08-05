//WAP to find out the second smallest and second largest element stored in an array.
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

    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSecond smallest element: %d", arr[n-2]);
    printf("\nSecond largest element: %d", arr[1]);
    

    return 0;
}