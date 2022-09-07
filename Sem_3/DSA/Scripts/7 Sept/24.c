//WAP to find the minimum and maximum element of the array.
#include <stdio.h>

int main(){
    int n, arr[20], max=0, min=10000;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>max)
            max = arr[i];
        else if(arr[i]<min)
            min = arr[i];
    }
    printf("Maximum element: %d", max);
    printf("\nMinimum element: %d", min);
    return 0;
}