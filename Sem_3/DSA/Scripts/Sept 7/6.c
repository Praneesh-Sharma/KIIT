//WAP to find the factorial of a given number.
#include <stdio.h>

int main(){
    int n, product=1;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i=1;i<n+1;i++){
        product *= i;
    }
    printf("Factorial: %d", product);

    return 0;
}