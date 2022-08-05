//WAP to search an element in an array of n numbers.
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

    int m;
    printf("Enter element to be searched: ");
    scanf("%d", &m);
    int flag = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == m)
            flag = i;
    }

    if(flag != -1)
        printf("\nThe given element is at index %d", flag);
    else
        printf("\nElement not present in the array.");

    return 0;
}