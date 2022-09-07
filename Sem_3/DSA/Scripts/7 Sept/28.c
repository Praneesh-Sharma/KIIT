//WAP to sort the elements of the array in ascending order using Bubble Sort technique.
#include <stdio.h>

int main(){
    int n, arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:");
    for(int i=0;i<n;i++){
        printf(" %d", arr[i]);
    }
}