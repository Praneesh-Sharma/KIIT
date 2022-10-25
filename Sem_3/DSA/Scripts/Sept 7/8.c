//WAP to print sum of even and odd numbers from 1 to N numbers.
#include <stdio.h>

int main(){
    int n, sum1=0, sum2=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i=0; i<n+1; i++){
        if(i%2==0)
            sum1 += i;
        else
            sum2 += i;
    }
    printf("Sum of odd numbers: %d", sum2);
    printf("\nSum of even numbers: %d", sum1);

    return 0;
}