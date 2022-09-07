//WAP to swap two elements using the concept of pointers.
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int m, n;
    printf("Enter numbers: ");
    scanf("%d %d", &m, &n);
    swap(&m, &n);
    printf("Swapped numbers: %d %d", m, n);
    return 0;
}