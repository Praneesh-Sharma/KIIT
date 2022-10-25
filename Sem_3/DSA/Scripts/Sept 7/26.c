//WAP to search an element in a array using Linear Search.
#include <stdio.h>

int main(){
    int m, n, arr[100], flag=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &m);
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            printf("Element found at position %d", i+1);
            flag++;
        }
    }
    if(flag == 0)
        printf("Element not present in array.");

    return 0;
}