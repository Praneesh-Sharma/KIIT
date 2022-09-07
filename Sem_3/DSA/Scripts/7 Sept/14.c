//WAP to find the sum of digits of the entered number.
#include <stdio.h>

int main(){
    int n, m, sum=0
    ;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n>0){
        m = n%10;
        sum += m;
        n /= 10;
    }
    printf("Sum of digits: %d", sum);

    return 0;
}
