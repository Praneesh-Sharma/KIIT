//C Program Sum of all numbers up to a given number Program in C
#include <stdio.h>

int main(){
    int a, sum=0;
    printf("Enter limit: ");
    scanf("%d", &a);

    for(int i=0;i<a+1;i++){
        sum += i;
    }
    printf("Sum : %d", sum);

    return 0;
}