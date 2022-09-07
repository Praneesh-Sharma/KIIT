//A positive number is called armstrong number if it is equal to the sum of cubes of its digits.
#include <stdio.h>

int main(){
    int l, n, m, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    l = m;

    while(n>0){
        m = n%10;
        sum += m*m*m;
        n /= 10;
    }
    if(sum == l)
        printf("given number is a armstring number");
    else
        printf("Given number is not a armstrong number.");

    return 0;
}