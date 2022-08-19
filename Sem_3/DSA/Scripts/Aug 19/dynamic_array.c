//Get an array dynamically, insert, search and display element using pointers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, sum=0, flag=1, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", (arr+i));
    }

    printf("\nArray:");
    for(int i=0;i<n;i++){
        printf(" %d", *(arr+i));
    }

    printf("\n\nEnter element to be searched: ");
    scanf("%d", &temp);
    
    for(int i=0;i<n;i++){
        if(temp == *(arr+i)){
            printf("Element found at index: %d", i+1);
            flag = 0;
        }
        else
            continue;  
    }

    if(flag==1)
        printf("Element not found.");

    return 0;
}