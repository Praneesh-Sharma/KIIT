//WAP to print the Fibonacci series.
#include <stdio.h>

int main(){
    int n, n1=0, n2=1, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Fibonacci series: %d %d", n1, n2);
    for(int i=2; i<n; ++i){
        sum = n1+n2;
        printf(" %d", sum);
        n1 = n2;
        n2 = sum;
    }
    return 0;
}