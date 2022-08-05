/*Given an array, WAP to print the next greater element (NGE) for every element. The next greater element for an element x is the first greater element on the right side of x
in array. Elements for which no greater element exist, consider next greater element as -1.*/
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
    
    printf("\nResult: ");
    int flag, i, j;
    for(i=0;i<n;i++){
        flag = -1;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                flag = arr[j];
                break;
            }
        }
        printf("\n%d\t%d", arr[i], flag);
    }
    
    return 0;
}